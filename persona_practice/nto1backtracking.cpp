#include<bits/stdc++.h>
using namespace std;
void nto1(int n,int i){
    if (n<i){
        return;

    }
    nto1(n,i+1);
    cout<<i;

}
int main(){
    nto1(5,1);
}