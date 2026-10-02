class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int maxi=INT_MIN;
        int minindex=INT_MAX;
        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=mat[i][j];
            }
            if(sum>maxi){
                maxi=sum;
                minindex=i;
            }
        }
        vector<int>v(2);
        v[0]=minindex;
        v[1]=maxi;
        return v;
    }
};