#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int a,b,gcd=0;
    cin>>a>>b;
    for(int i=1;i<=min(a,b);i++){
        if((a%i)==0&&(b%i)==0){gcd=i;}
    }
    cout<<gcd;
    return 0;
}
