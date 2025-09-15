#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n; cin>>n;
    int c=0;
    int a[n-c];
    for(int i=0;i<n;i++){
        int b;cin>>b;
        if(b==0){c++;}
        else{a[i]=b;}
    }
    sort(a,a+n-c);
    for(int j=0;j<n-c;j++){
        if(j=1){
            for(int l=0;l<c;l++){cout<<0;}
        }
        else{
            cout<<a[j];
        }
    }
    return 0;
}
