#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
        unordered_map<char,int> mpp1;
        unordered_map<char,int> mpp2;
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            mpp1[s[i]]++;

        }
        for(int i=0;i<t.size();i++){
            mpp2[t[i]]++;

        }
        for(int k=0;k<s.size();k++){
            if(mpp1[s[k]]!=mpp2[s[k]]){
                return false;
            }
        }
        return true;

        
    }