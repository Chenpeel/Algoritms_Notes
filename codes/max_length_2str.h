#ifndef MAX_LENGTH_2STR
#define MAX_LENGTH_2STR

#include <iostream>
int min(int a,int b){
    return a<b?a:b;
}
int max(int a,int b){
    return a>b?a:b;
}
template<class T>
T max_length_2str(T str1,T str2){
    int l1 = str1.size(),l2=str2.size();
    int n = min(l1,l2);
    int dp[n][n];
    T res;
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            dp[i][j]=0
        }
    }
    for(int i =n-1;i>0;i--){
        for(int j = n-1;j>0;j--){
            if(str1[i]==str2[j]) {
                dp[i][j]=dp[i-1][j-1]+1;
                res= str1[i]+res;
            }
            dp[i][i]=max(dp[i][j-1],dp[i-1][j]);
        }
    }
    return res;
}
#endif