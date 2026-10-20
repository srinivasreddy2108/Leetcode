class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int maxi=nums[n-1];
        int smaxi=0;
        for(int i=n-1;i>=0;i--){
            if(nums[i]!=maxi){
                smaxi=nums[i];
                break;
            }
        }
        long long tmaxi=-2147483648-1;
        for(int i=n-1;i>=0;i--){
            if(nums[i]!=maxi&&nums[i]!=smaxi){
                tmaxi=nums[i];
                break;
            }
        }
        if(tmaxi==-2147483648-1){
            return maxi;
        }
        return tmaxi;
    }
};