class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>row;
        for(int i=0;i<n;i++){
            int countr=0;
            for(int j=0;j<m;j++){
                countr+=grid[i][j];
            }
            row.push_back(countr);
        }
        vector<int>col;
        for(int i=0;i<m;i++){
            int countc=0;
            for(int j=0;j<n;j++){
                countc+=grid[j][i];
            }
            col.push_back(countc);
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&&(row[i]>1||col[j]>1)){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};