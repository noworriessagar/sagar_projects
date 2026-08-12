#include<bits/stdc++.h>
using namespace std;
int maxm(int &a,int&b,int &c){
    if(a>b && a>c) return --a;
    if(b>c && b>a) return --b;
    if(c>a && c>b) return --c;
}

int minm(int &a,int &b,int &c){
    if(a<b && a<c) return ++a;
    if(b<c && b<a) return ++b;
    if(c<a && c<b) return ++c;

}
int rounds(int a,int b,int c,int r){
    
    if(a==b||b==c||c==a) {
        return r;}
    else{maxm(a,b,c);
        minm(a,b,c);
        r++;
        rounds(a,b,c,r);
    }
}
int main(){
    int n;
    cin>>n;
    int a,b,c;
    while(n){
        cin>>a>>b>>c;
        cout<<rounds(a,b,c,0)<<"\n";
        n--;
    }
}