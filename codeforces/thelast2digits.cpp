#include <bits/stdc++.h>
using namespace std;
int main(){long long a;long long m=1;
    for(int i=0;i<4;i++){
        cin>>a;
        
        m*=(a%100);
    }
    cout<<setw(2)<<setfill('0')<<m%100;
    
    
}