class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int dist;
        int num=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                dist=nums[i];
            }
            else{
                dist=-nums[i];
            }
            if(dist<mini){
                mini=dist;
                num=nums[i];
            }
            else if(dist==mini){
                if(nums[i]>num){
                    num=nums[i];
                }
            }
        }
        return num;
    }
};