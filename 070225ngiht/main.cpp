#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,cou,ma=INT_MIN; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    sort(a,a+n);
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        if(i>0&&a[i]==a[i-1]){
            cou++;
            if(a[i]!=a[i-1]){
            ma=max(ma,cou);
            cout<<cou<<" "<<a[i]<<'\n';
            v.push_back(make_pair(a[i],cou));
            cou=0;}
        }
    }
    for(auto i:v){
        if(i.second==ma){
            cout<<i.first<<" ";
        }
    }
    return 0;
}
