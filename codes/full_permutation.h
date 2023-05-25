#ifndef Full_Permutation
#define Full_Permutation

#include <iostream>

//递归 全排列 (full permutation)
template<class T>
void perm(T list[],int k , int m){
    if(k == m){
        for(int i = k; i<=m;i++){
            cout<<list[i]; 
        }
        cout<<endl;
    }
    else{
        for(int i = k;i<=m;i++){
            swap(list[k],list[i]);
            perm(list,k+1,m);
            swap(list[k],list[i]);
        }
    }
}
template<class T>
void swap(T &a,T &b){
    T temp = a;
    a = b;
    b =temp;
}

#endif
