#include<bits/stdc++.h>
using namespace std;
int main(){int n;
    cin>>n;
    unordered_map<int,int> mpp;
    for( int i=1;i<=n;i++){
        int a;
        cin>>a;
        mpp[a]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<mpp[i]<<" ";

    }
}