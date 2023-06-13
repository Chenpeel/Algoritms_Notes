#ifndef DYNAMIC_PROGRAMMING
#define DYNAMIC_PROGRAMMING

#include<algorithm>
#include<iostream>
#include<vector>
#include<deque>

using namespace std;

//stairs climbing  like the fibonacci 
    int climbStairs(int n){
        deque<int> dq;
        dq[1]= 1;
        dq[2] = 2;
        for(int i =3;i<n+1;i++){
            dq[i]= dq[i-1]+dq[i-2];
        }
        return dq[n];
    }
    //利用双指针求解股票购入最大利润
    //动态规划问题
    int m_min(int i,int j){
        return i<j?i:j;
    }
    int m_max(int i,int j){
        return i>j?i:j;
    }
    int maxProfit(vector<int>& prices){
        if(prices.size()==0) return 0;

        int max = 0,min = prices[0];

        for(int i = 1;i<prices.size();i++){
            min = m_min(min,prices[i]);
            max = m_max(max,prices[i]-min);
        }
        return max;
    }

    //最大子序和

    int maxSubArray(vector<int>& nums){
        int ca =nums[0];
        int max=ca;
        int n =nums.size();
        for (int i=1;i<n;i++){
            ca =m_max(ca,0)+nums[i];
            max = m_max(max,ca);
        }
        return max;
    }


    //rob
        int rob(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        int len = nums.size();
        int *m = new int[len];
        m[0]=nums[0];
        m[1]=m_max(nums[0],nums[1]);
        for (int i = 2;i<len;i++){
            m[i] = m_max(nums[i]+m[i-2],m[i-1]);
        }
        return m[len-1];
    }






#endif