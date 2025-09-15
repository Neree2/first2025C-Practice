#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string day[]={"Thursday", "Friday", "Saturday","Sunday","Monday", "Tuesday", "Wednesday"};
    int d,m; cin>>d>>m;
    int months[]={31,28,31,30,31,30,31,31,30,31,30,31},c=0;
    for(int i=0;i<m-1;i++){c+=months[i];}
    c+=d;
    int r=(c-1)%7;
    cout<<day[r];
    return 0;
}
