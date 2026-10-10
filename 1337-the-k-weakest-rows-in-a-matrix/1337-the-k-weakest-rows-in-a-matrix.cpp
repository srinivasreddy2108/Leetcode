class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
        unordered_map<int,int>mpp;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<m;i++){
            int count=0;
            for(int j=0;j<n;j++){
                count+=mat[i][j];
            }
            mpp[i]=count;
            pq.push(count);
        }
        vector<int>v;
        for(int i=1;i<=k;i++){
            int store=pq.top();
            for(int j=0;j<m;j++){
                if(mpp[j]==store){
                    v.push_back(j);
                    mpp[j]=-1;
                    break;
                }
            }
            pq.pop();
        }
        return v;
    }
};