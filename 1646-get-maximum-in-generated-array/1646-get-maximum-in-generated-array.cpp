class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int>nums;
        nums.push_back(0);
        nums.push_back(1);
        for(int i=2;i<=n;i++){
            if(i%2==0){
                nums.push_back(nums[i/2]);
            }
            else{
                nums.push_back(nums[(i-1)/2]+nums[(i-1)/2+1]);
            }
        }
        int maxi=nums[0];
        for(int i=1;i<=n;i++){
            maxi=max(maxi,nums[i]);
        }
        return maxi;
    }
};