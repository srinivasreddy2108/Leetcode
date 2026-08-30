class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 1;
        }
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int store1=0;
        int store2=0;
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                store1=i;
            }
            if(nums[i]<mini){
                mini=nums[i];
                store2=i;
            }
        }
        int leftindex=min(store1,store2);
        int rightindex=max(store1,store2);
        int front=rightindex+1;
        int back=n-leftindex;
        int bothindex=leftindex+1+n-rightindex;
        return min({front,back,bothindex});
    }
};