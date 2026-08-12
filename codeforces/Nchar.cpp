#include <bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin>>c;
    if(char (c>='A') && c<='Z'){
        cout<<char(c+32);

    }
    else{
        cout<<char(c-32);
    }

}