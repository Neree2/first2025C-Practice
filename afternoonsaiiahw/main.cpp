#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;cin>>n;
    int a[n];
    priority_queue<int,vector<int>,greater<int>> odd;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2!=0){
            odd.push(a[i]);
            a[i]=INT_MAX;}}
    for(int i=0;i<n;i++){
        if(a[i]==INT_MAX){
            a[i]=odd.top();
            odd.pop();
    }}
    for(auto i: a){
        cout<<i<<' ';
    }
    return 0;
}
