#include <bits/stdc++.h>
using namespace std;
int main(){double a;
    cin>>a;
    if(ceil(a)==a || floor(a)==a){
        int d= int(a);
        cout<<"int "<<d;
    }
    else{
        cout<<"float "<<int(a)<<" "<<a-floor(a);
    }
}