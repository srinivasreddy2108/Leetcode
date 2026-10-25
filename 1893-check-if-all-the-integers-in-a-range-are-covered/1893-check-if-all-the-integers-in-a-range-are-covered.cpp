class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int cnt=0;
        int n=ranges.size();
        for(int i=left;i<=right;i++){
            bool flag=0;
            for(int j=0;j<n;j++){
                if(i>=ranges[j][0]&&i<=ranges[j][1]){
                    flag=1;
                    break;
                }
            }
            if(flag){
                cnt++;
            }
        }
        return cnt==right-left+1;
    }
};