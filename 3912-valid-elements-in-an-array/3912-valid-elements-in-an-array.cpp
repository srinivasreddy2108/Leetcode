class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            if(i==0||i==n-1){
                v.push_back(nums[i]);
                continue;
            }
            int flag1=1;
            for(int j=0;j<i;j++){
                if(!(nums[i]>nums[j])){
                    flag1=0;
                }
            }
            int flag2=1;
            for(int j=i+1;j<n;j++){
                if(!(nums[i]>nums[j])){
                    flag2=0;
                }
            }
            if(flag1||flag2){
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};