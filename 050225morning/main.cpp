#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n; cin>>n;
    int a[n],z=0;
    for(int i=0;i<n;i++){cin>>a[i];
        if(a[i]==0){z++;}}
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]==0){
            cout<<a[i+z];
            i+=z;
            for(int j=0;j<z;j++){cout<<0;}
        }
        else{cout<<a[i];}
    }
    return 0;
}
