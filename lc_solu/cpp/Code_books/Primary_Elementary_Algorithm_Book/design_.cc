#ifndef DESIGN
#define DESIGN


#include <random>
#include <iostream>
using namespace std;

//侯捷式标准写法
class Solution {
public:
    Solution(vector<int>& nums) : data(nums){
        //构造函数
    }
    vector<int>& const reset(){
        return data;
        //返回初始数组
    }
    vector<int>& shuffle(){
        vector <int>&temp(data);
        for (int i=temp.size();i>0;i--){
            swap(temp[i],temp[random()%i]);
        }
        //洗牌
        return  temp;
    }
private:
    vector<int>& data;
};






#endif