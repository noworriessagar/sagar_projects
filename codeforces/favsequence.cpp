#include <bits/stdc++.h>
using namespace std;
int main(){int n;
    cin>>n;
    while(n--){
        int x,a;
        cin>>x;
        vector<int> v(x);
        for(int i=0;i<x;i++){
            cin>>a;
            v[i]=a;
        }
        vector<int> temp(x);
        int j=0;int i=0;
        while(j<(x/2)){
            temp[i]=v[j];
            i++;
            temp[i]=v[v.size()-1-j];
            i++;
            j++;
        }
        if(x%2!=0){
            temp[i]=v[x/2];

        }
        for(int i=0;i<x;i++){
            cout<<temp[i]<<" ";
        }
    cout<<"\n";}
}