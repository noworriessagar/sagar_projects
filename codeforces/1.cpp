#include<bits/stdc++.h>
using namespace std;
bool watermelon(int n){
    if(n<=2){
        return false;
    }
    if(n%2==0){
        return true;
    }
    return false;
}
int main(){int x;
    cin>>x;
    if(watermelon(x)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}