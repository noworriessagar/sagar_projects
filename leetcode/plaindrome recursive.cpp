#include<bits/stdc++.h>
using namespace std;
void helper(string &s,int i){
    if (i>=(s.size()/2)){
        return;
    }
    swap(s[i],s[s.size()-i-1]);
    helper(s,i+1);
    
}
    bool isPalindrome(string s) {
        string clean;
        for(char &c : s){
            c=tolower(c);
            if(isalnum(c)){
                clean+=c;
            }}
        string dup=clean;
        helper(clean,0);
        if (clean==dup){
            return true;
        }   
            
        return false;
    }
        
    