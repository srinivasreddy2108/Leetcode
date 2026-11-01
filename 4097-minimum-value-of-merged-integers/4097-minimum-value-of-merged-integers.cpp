class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i+=2){
            int digit=floor(log10(nums[i+1]))+1;
            int num=nums[i]*pow(10,digit)+nums[i+1];
            mini=min(mini,num);
        }
        return mini;
    }
};