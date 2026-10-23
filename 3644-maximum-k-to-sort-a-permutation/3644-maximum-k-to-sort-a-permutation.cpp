class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n=nums.size();
        int ans=~0;
        vector<int>store=nums;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]!=store[i]){
                ans&=nums[i];
            }
        }
        if(ans==-1){
            return 0;
        }
        return ans;
    }
};