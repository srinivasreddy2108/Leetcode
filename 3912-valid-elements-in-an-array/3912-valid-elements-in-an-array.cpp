class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>lmax;
        int lmaxi=nums[0];
        for(int i=0;i<n;i++){
            lmax.push_back(lmaxi);
            lmaxi=max(lmaxi,nums[i]);
        }
        vector<int>rmax;
        int rmaxi=nums[n-1];
        for(int i=n-1;i>=0;i--){
            rmax.push_back(rmaxi);
            rmaxi=max(rmaxi,nums[i]);
        }
        reverse(rmax.begin(),rmax.end());
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]>lmax[i]||nums[i]>rmax[i]||i==0||i==n-1){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};