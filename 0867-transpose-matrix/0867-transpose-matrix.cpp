class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>>v;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int j=0;j<n;j++){
            vector<int>store;
            for(int i=0;i<m;i++){
                store.push_back(matrix[i][j]);
            }
            v.push_back(store);
        }
        return v;
    }
};