class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int row=original.size();
        
        vector<vector<int>>ans;
        if(row<m*n||m*n<row){
            return ans;
        }
        
        
        int i=0;
        for(int j=1;j<=m;j++){
            vector<int>v;
            for(int k=1;k<=n;k++){
                v.push_back(original[i]);
                i++;
            }
            ans.push_back(v);
        }
        
        return ans;
    }
};