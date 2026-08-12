#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int lastdigit;
    long long reverse=0;
    cin>>n;
    int temp=n;
    while(n){
        lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n/=10;


    }
    cout<<reverse<<'\n';
    if(reverse==temp){
        cout<<"YES";
    }
    else{cout<<"NO";}
}