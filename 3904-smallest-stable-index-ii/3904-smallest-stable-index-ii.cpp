class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        //using a vector to store min values at ech index;
        int n=nums.size();
        vector<int>v;
        int mini=INT_MAX;
        for(int i=n-1;i>=0;i--){
            mini=min(mini,nums[i]);
            v.push_back(mini);
        }
        reverse(v.begin(),v.end());
        int maxi=INT_MIN;
        
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            if(maxi-v[i]<=k){
                return i;
            }
        }
        return -1;
    }
};