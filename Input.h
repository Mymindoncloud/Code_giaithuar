#include<bits/stdc++.h>
#include"Doituong.h"
#include"Dinhdang.h"
#include"Kiemtra.h"
using namespace std;

void input_dean(Dean &dean){
    cout<<"De an:\n";
    cout<<"Ma de an:";
    cin>>dean.madean;
    cin.ignore();
    cout<<"Ten de an:";
    getline(cin,dean.tendean);
}

void input_nhansu(Nhansu &nhansu){
    cout<<"Nhan su:\n";
    cout<<"Ma nhan su:";
    cin>>nhansu.mans;
    cout<<"Ngay vao ban:";
    cin>>nhansu.ngayvb;
    cin.ignore();
    nhansu.ngayvb=Ngay(nhansu.ngayvb);
    cout<<"Ten nhan su:";
    getline(cin,nhansu.tenns);
    while(Ten(nhansu.tenns)==false){
        cout<<"Xin hay nhap ten chinh xac!\n";
        cout<<"Ten nhan su:";
        getline(cin,nhansu.tenns);
    }
    nhansu.tenns=Name(nhansu.tenns);
}

void input_phancong(Phancong &phancong){
    cout<<"Ma de an:";
    cin>>phancong.madean;
    cin.ignore();
    cout<<"Ma nhan su:";
    getline(cin,phancong.mans);
}