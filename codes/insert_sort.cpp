#include<iostream>

template<typename T>
void insert_sort(T list[],int size){
    int i , j;
    T temp;
    for(int i =1;i<size;i++){
        temp = list[i];
        j = i-1;
        while(j>=0&&list[j]>temp){
            list[j+1] = list[j];
            j--;
        }
        list[j+1] = temp;
    }
}