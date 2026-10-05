class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int sum=0;
        vector<vector<int>>ans;
        for(int i=0;i<m;i++){
            vector<int>v;
            priority_queue<int>pq;
            for(int j=0;j<n;j++){
                pq.push(grid[i][j]);
            }
            while(!pq.empty()){
                v.push_back(pq.top());
                pq.pop();
            }
            ans.push_back(v);
        }
        for(int i=0;i<n;i++){
            int maxi=ans[0][i];
            for(int j=1;j<m;j++){
                maxi=max(maxi,ans[j][i]);
            }
            sum+=maxi;
        }
        return sum;
    }

};