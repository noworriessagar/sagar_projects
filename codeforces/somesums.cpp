#include <bits/stdc++.h>
using namespace std;
int main(){int n,a,b;
    cin>>n>>a>>b;
    int sod=0;
    int sum=0;
    int ld;
    int temp;
    for(int i=1;i<=n;i++){
        temp=i;
        sod=0;
        while(temp){ld=temp%10;
            sod+=ld;
            temp/=10;}
        if(sod>=a && sod<=b){
            sum+=i;}
    }
    cout<<sum;    

    
    }

