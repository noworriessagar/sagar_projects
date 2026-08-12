#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c;
    long long tempa,tempb,tempc;
    cin>>a>>b>>c;
    tempa=a;
    tempb=b;
    tempc=c;
    if(a>b){
        swap(a,b);
    }
    if(b>c){
        swap(b,c);

    }
    if(a>b){
        swap(a,b);
    }
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n\n";
    cout<<tempa<<"\n"<<tempb<<"\n"<<tempc<<"\n";

}