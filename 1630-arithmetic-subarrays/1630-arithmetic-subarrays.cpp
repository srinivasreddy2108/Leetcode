class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int m=l.size();
        vector<bool>ans(m,0);
        for(int i=0;i<m;i++){
            vector<int>v;
            for(int j=l[i];j<=r[i];j++){
                v.push_back(nums[j]);
            }
            sort(v.begin(),v.end());
            int store=v[1]-v[0];
            bool flag=1;
            for(int k=2;k<v.size();k++){
                if(store!=v[k]-v[k-1]){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
            ans[i]=1;
            }
        }
        return ans;
    }
};