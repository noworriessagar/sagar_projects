#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> v;
    
    cin>>n;
    for(int i=1;i<=n;i++){int x;
        cin>>x;
        v.push_back(x);}
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i];

    }
    int mid=sum/2;
    
    int sum2=0;
    sort(v.begin(),v.end());
    for(int i=1;i<=n;i++){sum2+=v[v.size()-i];
        if(sum2>mid){
            cout<<i;
            break;
        }

    }
}