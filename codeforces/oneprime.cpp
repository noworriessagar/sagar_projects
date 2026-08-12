#include <bits/stdc++.h>
using namespace std;
int main(){long long n;
    cin>>n;
    int isprime=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            cout<<"NO";
            isprime++;
            break;
        }
    }
    if(isprime==0){
        cout<<"YES";
    }

}