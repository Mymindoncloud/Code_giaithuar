#ifndef PHANCONG_LK
#define PHANCONG_LK
#include<bits/stdc++.h>
#include"Doituong.h"
using namespace std;

struct Node_phancong{
    Phancong phancong;
    Node_phancong* next;
};

struct List_phancong{
    Node_phancong* head;
    Node_phancong* tail;
};

Node_phancong*create_nodephancong(Phancong phancong){
    Node_phancong* temp=new Node_phancong();
    temp->phancong = phancong;
    temp->next=NULL;

}

void create_listphancong(List_phancong &l){
    l.head=NULL;
    l.tail=NULL;
}

void add_tail_dean_phancong(List_phancong &l,Phancong phancong){
    Node_phancong*p=create_nodephancong(phancong);
    if(l.head==NULL){
        l.head=l.tail=p;
    }else{
        
        l.tail->next=p;
        l.tail=p;
    }
}
#endif
