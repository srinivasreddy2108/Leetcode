class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int>mpp;
        int m=items1.size();
        for(int i=0;i<m;i++){
            mpp[items1[i][0]]+=items1[i][1];
        }
        int n=items2.size();
        for(int i=0;i<n;i++){
            mpp[items2[i][0]]+=items2[i][1];
        }
        vector<vector<int>>ans;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            vector<int>store;
            store.push_back(it->first);
            store.push_back(it->second);
            ans.push_back(store);
        }
        return ans;
    }
};