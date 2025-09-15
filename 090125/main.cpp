#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,min=INT_MAX,max=INT_MIN;
    cin>>n;
    for(int i; i<n;i++){
        int a; cin>>a;
        if(a>max){max=a;}
        if(a<min){min=a;}
    }
    cout<<min<<'\n'<<max;
    return 0;
}
