#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int x,y; cin>>x>>y;
    if(y%x==0){cout<<y/x;}
    else if(x>y){cout<<2;}
    else{
        cout<<int(y/x)+1;
    }
    return 0;
}
