#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string str; cin>>str;
    string A="ABC",B="BABC",G="CCAABB";
    int a,b,g;
    for(int i=0;i<n;i++){
        if(str[i]%3==A[i]){a++;}
        if(str[i]%4==B[i]){b++;}
        if(str[i]%6==G[i]){g++;}
    }
    int ma=max(a,(b,g));
    cout<<ma<<'\n';
    if(a==ma){cout<<"Adrian";}
    if(b==ma){cout<<"Bruno";}
    if(g==ma){cout<<"Goran";}
}