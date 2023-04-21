#include<bits/stdc++.h>
#include"Doituong.h"
#include"Kiemtra.h"
#include"Dinhdang.h"
using namespace std;
Dean nhap_dean(){
        Dean dean;
        cout<<"Hay nhap ma de an:";
        cin>>dean.madean;
        cin.ignore();
        cout<<"Hay nhap ten de an:";
        getline(cin,dean.tendean);
        return dean;
}
Nhansu nhap_nhansu(){
        Nhansu nhansu;
        cout<<"Hay nhap ma nhan su:";
        cin>>nhansu.mans;
         cin.ignore();
        cout<<"Hay nhap ten nhan su:";
        Nhaplai2:
        getline(cin,nhansu.tenns);
        if(Ten(nhansu.tenns)==false){
            goto Nhaplai2;
        }
        nhansu.tenns=Name(nhansu.tenns);
        cout<<"Hay nhap ngay vao ban:";
        cin>>nhansu.ngayvb;
        nhansu.ngayvb=Ngay(nhansu.ngayvb);
        return nhansu;
}
Phancong nhap_slphancong(vector<Nhansu>nhansu,vector<Dean>dean){
        bool logic =true;
        bool logic1=true;
        Nhaplai:
        Phancong phancong;
        cout<<"Hay nhap ma de an:";
        cin>>phancong.madean;
       for(int i=0;i<dean.size();i++){
        if(dean[i].madean==phancong.madean){
            logic=false;
            break;
        }
       }
       if(logic){
        cout<<"\nHay nhap lai!";
        goto Nhaplai;
       }
       Nhaplai1:
        cout<<"Hay nhap ma nhan su:";
        cin>>phancong.mans;
        for(int i=0;i<nhansu.size();i++){
        if(nhansu[i].mans==phancong.mans){
            logic1=false;
            break;
        }
       }
       if(logic1){
        cout<<"\nHay nhap lai!";
        goto Nhaplai1;
       }
        return phancong;
}
void Xuat_dean(vector<Dean>dean){
    cout<<"De an:"<<endl;
    for(int i=0;i<dean.size();i++){
        cout<<"Ma de an:"<<dean[i].madean<<endl;
        cout<<"Ten de an:"<<dean[i].tendean<<endl;
    }
}
void Xuat_nhansu(vector<Nhansu>nhansu){
    cout<<"Nhan su:"<<endl;
    for(int i=0;i<nhansu.size();i++){
        cout<<"Ma nhan su:"<<nhansu[i].mans<<endl;
        cout<<"Ten nhan su:"<<nhansu[i].tenns<<endl;
        cout<<"Ngay vao ban:"<<nhansu[i].ngayvb<<endl;
    }
}
void Xuat_phacong(vector<Phancong>phancong){
    cout<<"Phan cong:"<<endl;
    for(int i=0;i<phancong.size();i++){
        cout<<"Ma de an:"<<phancong[i].madean<<endl;
        cout<<"Ma nhan su:"<<phancong[i].mans<<endl;
        cout<<endl;
    }
}
int main(){

vector<Dean>dean;
vector<Nhansu>nhansu;
vector<Phancong>phancong;
int n;
cout<<"1.Nhap de an"<<endl;
cout<<"2.Nhap nhan su"<<endl;
cout<<"3.Nhap phan cong"<<endl;
cout<<"4.Xuat de an"<<endl;
cout<<"5.Xuat nhan su"<<endl;
cout<<"6.xuat phan cong"<<endl;
cout<<"7.Thoat"<<endl;
bool logic=true;
while(logic)
{
cout<<"hay nhap lua chon:"; cin>>n;
switch(n){
    case 1:{
        Dean them=nhap_dean();
        dean.push_back(them);
        break;
    }
    case 2:
    {
        Nhansu them=nhap_nhansu();
        nhansu.push_back(them);
        break;
    }
    case 3:
    {
        Phancong them=nhap_slphancong(nhansu,dean);
        phancong.push_back(them);
        break;
    }
    case 4:{
        Xuat_dean(dean);
        break;
    }
    case 5:
    {
        Xuat_nhansu(nhansu);
        break;
    }
    case 6:
    {
        Xuat_phacong(phancong);
        break;
    }
    case 7:
    {
        logic=false;
        cout<<"Xin cam con!";
        break;
    }
    default:{
        cout<<"Vui long nhap lai chinh xac\n";
    }
}
}
return 0;
}
