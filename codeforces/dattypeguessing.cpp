#include <bits/stdc++.h>
using namespace std;
int main(){
   long long a,k,n;
   cin>>n>>k>>a;
   long long d=(n*k)/a;
   if(((n*k)%a)!=0){
    cout<<"double";
   }
   else{
    long long limit= 1LL<<31;
    if (d>=(-1*limit) && d<=(limit-1)){
        cout<<"int";
    }
    else{cout<<"long long";}
   }

}