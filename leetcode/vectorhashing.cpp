#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
         vector<int> hash(arr.size(),0);
         for(int i=0;i<arr.size();i++){
             hash[arr[i]-1]++;
         } return hash;
    }
};
