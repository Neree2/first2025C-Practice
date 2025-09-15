#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string str; cin>>str;
    int temp1=0,temp2=0;
    for(int i=0;i<str.length();i++){
        temp1=(temp1*10+(str[i]-'0'))%3;
        temp2=(temp2*10+(str[i]-'0'))%11;}
    cout<<temp1<<" "<<temp2;
    return 0;
}
