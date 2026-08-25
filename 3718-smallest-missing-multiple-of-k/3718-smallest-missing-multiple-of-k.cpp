class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int pro=1;
        while(mpp[pro*k]){
            pro+=1;
        }
        return pro*k;
    }
};