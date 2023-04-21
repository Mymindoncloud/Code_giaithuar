#ifndef NHANSU_LK
#define NHANSU_LK
#include<bits/stdc++.h>
#include"Doituong.h"
using namespace std;

struct Node_nhansu{
    Nhansu nhansu;
    Node_nhansu* next;
};

struct List_nhansu{
    Node_nhansu* head;
    Node_nhansu* tail;
};

Node_nhansu*create_nodenhansu(Nhansu nhansu){
    Node_nhansu* temp=new Node_nhansu();
    temp->nhansu = nhansu;
    temp->next=NULL;

}

void create_listnhansu(List_nhansu &l){
    l.head=NULL;
    l.tail=NULL;
}

void add_tail_dean_nhansu(List_nhansu &l,Nhansu nhansu){
    Node_nhansu*p=create_nodenhansu(nhansu);
    if(l.head==NULL){
        l.head=l.tail=p;
    }else{
        
        l.tail->next=p;
        l.tail=p;
    }
}
#endif