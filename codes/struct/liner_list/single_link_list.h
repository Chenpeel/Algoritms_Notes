#ifndef SINGLE_LINK_LIST_H
#define SINGLE_LINK_LIST_H

#include <iostream>

template<typename T>
struct Node {
    T data{0};
    struct Node<T> *next{nullptr};
};

template<typename T>
using LinkList = Node<T>*;

template<typename T>
LinkList<T> InitList(){
    LinkList<T> new_node  = new Node<T>;
    new_node->data = 0;
    new_node->next = nullptr;
    return new_node;
}

template<typename T>
LinkList<T> CreatNode(const T data){
    LinkList<T> new_node = new Node<T>;
    new_node->data = data;
    new_node->next = nullptr;
    return new_node;
}

template<typename T>
void print(const LinkList<T> list){
    if(!list->next) return;
    LinkList<T> p;
    p = list->next;
    while(p){
        std::cout<<p->data<<" ";
        p = p->next;
    }
    std::cout<<std::endl;
}

template<typename T>
void InsertListHead(LinkList<T> list,const T data){
    LinkList<T> node = CreatNode(data);
    node -> next = list->next;
    list -> next = node;
}

template<typename T>
void InsertListTail(LinkList<T> list,const T data){
    while(list){
        if(!list->next){
            list->next = CreatNode(data);
            return;
        }
        list = list->next;
    }
}

template<typename T>
void Insert(LinkList<T> list, const int i, const T data){
    LinkList<T> p =  list;
    int j = 0;
    while(p&&j<i-1){
        p = p->next;
        j++;
    }
    if(!p||j>i-1) return ;
    LinkList<T> temp_node = CreatNode(data);
    temp_node->next = p->next;
    p->next = temp_node;
}

template<typename T>
T GetElem(const LinkList<T> list,const int i){
    LinkList<T> p = list->next;
    int j=1;
    while(p && j<i){
        p = p->next;
        j++;
    }
    return p->data;
}

template<typename T>
T DelNode(const LinkList<T> list,const int i){
    LinkList<T> p = list->next;
    int j =1;
    while(p && j<i-1){
        p = p->next;
        j++;
    }
    T res;
    LinkList<T> del_node = p->next;
    res = del_node->data;
    p->next = del_node->next;
    delete del_node;
    return res;
}

template<typename T>
void DelList(LinkList<T> list){
    LinkList<T> p;
    while(list){
        p = list;
        list = list->next;
        delete p;
        p = nullptr;
    }
}

template<typename T>
LinkList<T> MergeList(LinkList<T> list1, LinkList<T> list2){
    LinkList<T> p1 = list1->next;
    LinkList<T> p2 = list2->next;
    LinkList<T> list = list1;
    LinkList<T> p = list1;
    while(p1 && p2){
        if(p1->data <= p2->data){
            p->next = p1;
            p = p1;
            p1 = p1->next;
        }
        else{
            p->next = p2;
            p = p2;
            p2 = p2->next;
        }
    }
    p->next = p1 ? p1 : p2;
    delete list2;
    return list;
}

#endif