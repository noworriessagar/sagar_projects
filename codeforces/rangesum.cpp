#include <bits/stdc++.h>
using namespace std;
int main(){long long n,l,r;
    cin>>n;
    while(n--){
        cin>>l>>r;
        if(l>r){
            swap(l,r);
        }
    cout<<abs((r*(r+1)/2)-((l*(l-1))/2))<<"\n";}
}