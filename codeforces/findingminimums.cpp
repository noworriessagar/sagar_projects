#include <bits/stdc++.h>
using namespace std;
int main(){int n,k,l;
    cin>>n>>k;
    for(int i=0;i<n;i+=k){
        int mn=INT_MAX;
        for(int j=i;j<min(n,i+k);j++){
            cin>>l;
            if(l<mn){
                mn=l;
            }

        }
        cout<<mn<<" ";
    }
}