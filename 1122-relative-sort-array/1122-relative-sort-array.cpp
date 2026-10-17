#include<bits/stdc++.h>
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>v;
        unordered_map<int,int>mpp;
        for(int i=0;i<arr1.size();i++){
            mpp[arr1[i]]++;
        }
        unordered_map<int,int>mpp1;
        for(int i=0;i<arr2.size();i++){
            mpp1[arr2[i]]++;
        }
        for(int i=0;i<arr2.size();i++){
            int count=mpp[arr2[i]];
            for(int j=1;j<=count;j++){
                v.push_back(arr2[i]);
            }
        }
        vector<int>nota;
        for(int i=0;i<arr1.size();i++){
            if(mpp1[arr1[i]]==0){
                nota.push_back(arr1[i]);
            }
        }
        sort(nota.begin(),nota.end());
        for(int i=0;i<nota.size();i++){
            v.push_back(nota[i]);
        }
        return v;
    }
};