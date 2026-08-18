class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        int hash[51]={0};
        if(k==0||k==n){
            int maxi=INT_MIN;
            for(int i=0;i<n;i++){
                maxi=max(maxi,nums[i]);
            }
            return maxi;
        }
        for(int i=0;i<n-k+1;i++){
            
                for(int l=i;l<i+k;l++){
                    hash[nums[l]]++;
                }
            
        }
        int ans=-1;
        for(int i=0;i<51;i++){
            if(hash[i]==1){
                ans=i;
            }
        }
        return ans;
    }
};