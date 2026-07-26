#include<bits/stdc++.h>
using namespace std;
int cnt=1;;
void printn(int n){
    if (cnt==n+1){
        
        return;
    }
    cout<<cnt<<"\n";
    cnt++;
    printn(n);
}
int main(){
    printn(6);
}