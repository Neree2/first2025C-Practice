#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n; cin>>n;
    string s;
    vector<int> a(n);
    for(int i=0;i<n;i++){cin>>a[i];
        if(a[i]==0){s+='0';}}
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i]!=0 && a[i-1]==0){
            cout<<a[i]<<s;
        }
        else if(a[i]!=0){cout<<a[i];}
    }
    return 0;
}
