#include<bits/stdc++.h>
using namespace std;
string Name(string s){
    stringstream get(s);
    string plus="";
    string new_k="";
    while(get>>plus){
        plus[0]=toupper(plus[0]);
        for(int i=1;i<plus.length();i++){
            plus[i]=tolower(plus[i]);
        }
        new_k+=plus+" ";
        plus="";
    }
    return new_k;
}
string Ngay(string &s){
    string day="";
    int i=0;
    while (s[i]!='/')
    {
        day+=s[i];
        i++;
    }
    i++;
    string thang="";
    while(s[i]!='/'){
        thang+=s[i];
        i++;
    }
    string nam="";
    i++;
    while(i<s.length()){
        nam+=s[i];
        i++;
    }
    if(day.length()!=2){
        day="0"+day;
    }
    if(thang.length()!=2){
        thang="0"+thang;
    }
    return (day+"/"+thang+"/"+nam);
}