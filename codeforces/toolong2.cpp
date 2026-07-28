#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string k;
    while(n){
        cin>>k;
        int s= k.size();
        if(s>10){
            k.erase(1,s-2);
            k.insert(1,to_string(s-2));
            cout<<k<<"\n";
        }
        else{
            cout<<k<<"\n";
        }
        n--;
        }
        
    }
    