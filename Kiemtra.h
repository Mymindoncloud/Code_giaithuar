#include<bits/stdc++.h>
using namespace std;
bool Ten(string s){
    for(int i=0;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || s[i]==' '){
            continue;
        }else{
            return false;
        }
    }
    return true;
}