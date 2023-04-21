#include<bits/stdc++.h>
#include"Doituong.h"
#include"Dean_lk.h"
#include"Nhansu_lk.h"
#include"Phancong_lk.h"
using namespace  std;

void Xuat_dean(List_dean a){
    Node_dean* p=a.head;
    while(p!=NULL){
        cout<<"Ma de an:"<<p->dean.madean<<endl;
        cout<<"Ten de an:"<<p->dean.tendean<<endl;
        cout<<endl;
        p=p->next;
    }
}

void Xuat_nhansu(List_nhansu a){
    Node_nhansu* p=a.head;
    while(p!=NULL){
        cout<<"Ma nhan su:"<<p->nhansu.mans<<endl;
        cout<<"Ngay vao ban:"<<p->nhansu.ngayvb<<endl;
        cout<<"Ten nhan su:"<<p->nhansu.tenns<<endl;
        cout<<endl;
        p=p->next;
    }
}

Xuat_phancong(List_phancong a){
    Node_phancong* p=a.head;
    while(p!=NULL){
        cout<<"Ma de an:"<<p->phancong.madean<<endl;
        cout<<"Ma nhan su:"<<p->phancong.mans<<endl;
        cout<<endl;
        p=p->next;
    }
}