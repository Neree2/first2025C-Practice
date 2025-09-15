#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fbo(int n)(
    if(n<=0){return 0;}
    else if(n==1){
        return 1;
    }
    else{
        return fbo(n-1)+fbo(n-2);
    }
          )

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
