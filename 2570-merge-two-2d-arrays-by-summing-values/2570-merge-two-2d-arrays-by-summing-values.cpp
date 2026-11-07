class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        map<int,int>mpp;
        for(int i=0;i<m;i++){
            mpp[nums1[i][0]]+=nums1[i][1];
        }
        for(int i=0;i<n;i++){
            mpp[nums2[i][0]]+=nums2[i][1];
        }
        vector<vector<int>>ans;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            vector<int>v;
            v.push_back(it->first);
            v.push_back(it->second);
            ans.push_back(v);
        }
        return ans;
    }
};