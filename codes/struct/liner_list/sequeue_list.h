#ifndef SEQUEUE_LIST_H
#define SEQUEUE_LIST_H

#include <iostream>

#define LIST_INIT_SIZE 50
#define LIST_INCRE 30

template<typename T>
struct Sqlist {
    T *elem{NULL};
    int length{0};
    int listsize{0};        
};

template<typename T>
void ReNew(Sqlist<T> & L){
    T *new_elem = new T[LIST_INCRE + LIST_INIT_SIZE];
    for(int i = 0;i<L.length;i++){
        new_elem[i]=L.elem[i];
    }
    delete[] L.elem;
    L.elem = new_elem;
    L.listsize += LIST_INCRE;
}

template<typename T>
void InitList(Sqlist<T> & L){
    L.elem = new T[LIST_INIT_SIZE];
    if(!L.elem) InitList(L);
    L.listsize = LIST_INIT_SIZE;
    L.length = 0;
}

template<typename T>
void print(const Sqlist<T> L){
    for(int i = 0 ; i < L.length;i++){
        std::cout << L.elem[i] << ", ";
    }
    std::cout<<std::endl;
}

template<typename T>
void Insert(Sqlist<T> &L, const int i, const T e){
    if(i<1||i>L.length+1) { std::cout<<"位置错误"<<std::endl;  return;}
    if(L.length+1 > L.listsize) ReNew(L);
    for(int k = L.length-1;k>= i-1;k--){
        L.elem[k+1] = L.elem[k];
    }
    L.elem[i-1] = e;
    L.length++;
}

template<typename T>
T Delete_Elem(Sqlist<T> &L,const int i){
    if(i<1||i>L.length){
        std::cout<< "序号错误" << " (1~ " << L.length<<") "<<std::endl; 
        return ;
    }  
    int k = i-1;
    T delete_elem =  L.elem[k];
    for(k;k<L.length; k++){
        L.elem[k] = L.elem[k+1];
    }
    L.length--;
    return delete_elem;
}

template<typename T>
int * GetElem(const Sqlist<T> &L ,const T e){
    int res_size = 5;
    int * res = new int[res_size];
    for(int i= 0;i<res_size;i++){res[i]=-1;}
    int k =0;
    for(int i = 0;i<L.length;i++){
        if(L.elem[i]!=e) continue;
        else {
            if(k>=res_size) res_size += 5;
            res[k] = i;
            continue;
        }
    }
    return res;
}

template<typename T>
void Merge_Sqlist(const Sqlist<T> &L1, const Sqlist<T> &L2, Sqlist<T> &L){
    L.length = L1.length + L2.length;
    L.listsize = L.length;
    L.elem = new T[L.listsize];
    T *p1 = L1.elem, *p2 = L2.elem, *p = L.elem;
    const T *p1l = L1.elem + L1.length - 1, *p2l = L2.elem + L2.length - 1;
    while (p1 <= p1l && p2 <= p2l){
        if(*p1 <= *p2) *p++ = *p1++;
        else *p++ = *p2++;
    } 
    while (p1 <= p1l) *p++ = *p1++;
    while (p2 < p2l) *p++ = *p2++;
    delete[] p1;
    delete[] p2;
}

#endif