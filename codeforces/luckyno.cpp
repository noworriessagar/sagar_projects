#include <bits/stdc++.h>
using namespace std;
int main(){long long a;
    cin>>a;
    int b,c;
    b=a%10;
    c=a/10;
    if(b%c==0 || c%b==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}