#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    set<int> s;
    for(int i=0;i<3;i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    if(s.size()==1){
        cout<<"all the same";}
    else if(s.size()==2){
        cout<<"neither";}
    else if(s.size()==3){
        cout<<"all different";}
    return 0;
}
