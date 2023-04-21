#ifndef DEAN_LK
#define DEAN_LK
#include<bits/stdc++.h>
#include"Doituong.h"
using namespace std;

struct Node_dean{
    Dean dean;
    Node_dean* next;
};

// dung khai bao
struct List_dean{
    Node_dean* head;
    Node_dean* tail;
};

Node_dean*create_nodedean(Dean dean){
    Node_dean* temp=new Node_dean();
    temp->dean = dean;
    temp->next=NULL;

}
//dung khai bao
void create_listdean(List_dean &l){
    l.head=NULL;
    l.tail=NULL;
}

// dung them
void add_tail_dean_dean(List_dean &l,Dean dean){
    Node_dean*p=create_nodedean(dean);
    if(l.head==NULL){
        l.head=l.tail=p;
    }else{
        
        l.tail->next=p;
        l.tail=p;
    }
}
#endif