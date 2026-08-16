class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n=nums.size();
       unordered_map<int,int>mpp;
       for(int i=0;i<n;i++){
        mpp[nums[i]]=i;
       }
       vector<int>v;
       for(int i=0;i<n;i++){
        if(mpp[target-nums[i]]&&i!=mpp[target-nums[i]]){
            v.push_back(mpp[target-nums[i]]);
            v.push_back(i);
            break;
        }
       }
      return v;
    }
};