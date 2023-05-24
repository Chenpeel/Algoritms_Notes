#include<iostream>
using std::vector;

void swap(int &a,int &b){
    a = a + b;
    b = a - b;
    a = a - b;  
}
int part(vector<int>& v,int left,int right){
    int n = v.size();
    int pivot = rand() % n;
    int i = left,j = right;
    while(i<j && pivot > v[left]){
        while(i<j && pivot < v[right]){
            j--;
        }
        if(i<j){ swap(v[i],v[j]); }
        while(i<j&& pivot>v[left]){
            i++;
        }
        if(i<j){ swap(v[i],v[j]); }
    }
    return i;
}
void quick_sort(vector<int>& v,int left,int right){
    int mid ;
    if(left<right){
        mid = part(v,left,right);
        quick_sort(v,left,mid-1);
        quick_sort(v,mid+1,right);
    }
}
void quick_sort(vector<int>& v){
    quick_sort(v,0,v.size()-1);    
}
