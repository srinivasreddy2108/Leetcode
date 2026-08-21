class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        vector<int>v;
        for(int i=0;i<n;i++){
            if(mpp[nums[i]]==1&&mpp[nums[i]+1]==0&&mpp[nums[i]-1]==0){
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};