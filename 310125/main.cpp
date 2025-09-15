#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string op,a,b; cin>>a>>op>>b;
    int n1=a.length(),n2=b.length(),temp;
    if(op=="*"){
        cout<<1;
        for(int i=0;i<(n1+n2)-2;i++){cout<<0;}
    }
    if(op=="+"){
    if(n2>n1){
        temp=n1;
        n1=n2;
        n2=temp;
    }
    for(int i=0;i<n1;i++){
        if(i==0||i==(n1-n2)){
            if(n1==n2){cout<<2;}
            else{cout<<1;}}
        else{cout<<0;}
    }}
    return 0;
}
