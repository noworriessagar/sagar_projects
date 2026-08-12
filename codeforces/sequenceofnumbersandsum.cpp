#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    int sum;
    cin>>n>>m;
    while(n>0 && m>0){
        sum=0;
        if(n>=m){
            for(int i=m;i<=n;i++){
                cout<<i<<" ";
                sum+=i;
            }
        }
        else{
            for(int i=n;i<=m;i++){
                cout<<i<<" ";
                sum+=i;
            }
                }
        cout<<"sum ="<<sum<<"\n";        
        cin>>n>>m;    
    }
    

    
}