#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int a,b,c,r=0; cin>>a>>b>>c;
    while(a!=1||b!=1||c!=1){
        if(a!=1){a=int(a/2);r++;}
        if(b!=1){b=int(b/2);r++;}
        if(c!=1){c=int(c/2);r++;}
    }
    cout<<r;
    return 0;
}
