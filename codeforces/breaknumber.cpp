#include <bits/stdc++.h>
using namespace std;
int main(){
    long long k,cnt,mx,n;
    cin>>k;
    mx=INT_MIN;
    while(k--){
        cin>>n;
        cnt=0;
        while(n%2==0){
            cnt++;
            n/=2;
        }
        if(cnt>mx){
            mx=cnt;
        }

    }
    cout<<mx;
}