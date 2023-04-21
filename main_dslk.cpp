#include<bits/stdc++.h>
#include"Doituong.h"
#include"Dean_lk.h"
#include"Nhansu_lk.h"
#include"Phancong_lk.h"
#include"Input.h"
#include"output.h"
using namespace  std;

List_nhansu lnhansu;
List_phancong lphancong;
List_dean ldean;

bool Check_madean(string a)
{
    Node_dean* p=ldean.head;
    while(p!=NULL){
        if(p->dean.madean==a){
            return true;
        }
        p=p->next;
    }
    return false;
}
bool Check_manhansu(string a){
    Node_nhansu* p=lnhansu.head;
    while(p!=NULL){
        if(p->nhansu.mans==a){
            return true;
        }
        p=p->next;
    }
    return false;
}


int main()
{
    bool quit=false;
    create_listdean(ldean);
    create_listnhansu(lnhansu);
    create_listphancong(lphancong);
    Dean dean;
    Nhansu nhansu;
    Phancong phancong;
    cout<<"1.Nhap de an\n";
    cout<<"2.Nhap nhan su\n";
    cout<<"3.Nhap phan cong\n";
    cout<<"4.Xuat de an\n";
    cout<<"5.Xuat nhan su\n";
    cout<<"6.Xuat phan cong \n";
    cout<<"7.Thoat\n";
    while(!quit)
    {
    int choose;
    cout<<"Xin hay nhap lua chon:"; 
    cin>>choose;
    switch (choose){
        case 1:{
            input_dean(dean);
            add_tail_dean_dean(ldean,dean);
            break;
        }
        case 2:{
            input_nhansu(nhansu);
            add_tail_dean_nhansu(lnhansu,nhansu);
            break;
        }
        case 3:
        {
            Nhaplai:
            input_phancong(phancong);
            add_tail_dean_phancong(lphancong,phancong);
            if(!(Check_madean(phancong.madean) && Check_manhansu(phancong.mans))){
                cout<<"Khong ton tai ma nhan su hoac ma de an!Xin hay nhap lai\n";
                goto Nhaplai;
            }
            break;
        }
        case 4:{
            Xuat_dean(ldean);
            break;
        }
        case 5:{
            Xuat_nhansu(lnhansu);
            break;
        }
        case 6:
        {
            Xuat_phancong(lphancong);
            break;
        }
        case 7:{
            quit=true;
            break;
        }
        default:{
            cout<<"Xin hay nhap lai!\n";
        }
    }
    }
    return 0;
}