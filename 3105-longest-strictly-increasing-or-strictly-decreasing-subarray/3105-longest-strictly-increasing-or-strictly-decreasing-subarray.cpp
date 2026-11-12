class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int maxi=1;
        for(int i=0;i<n;i++){
            int cnt=1;
            for(int j=i;j<n-1;j++){
                if(nums[j]<nums[j+1]){
                    cnt++;
                }
                else{
                    
                    cnt=1;
                }
                maxi=max(maxi,cnt);
            }
        }
        for(int i=0;i<n;i++){
            int cnt=1;
            for(int j=i;j<n-1;j++){
                if(nums[j]>nums[j+1]){
                    cnt++;
                }
                else{
                    
                    cnt=1;
                }
                maxi=max(maxi,cnt);
            }
        }
        return maxi;
    }
};