class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n=nums.size();
        int hash[100001]={0};
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                hash[nums[i]]++;
            }
        }
        int store=0;
        for(int i=0;i<100001;i+=2){
            if(hash[i]>hash[store]){
                store=i;
            }
        }
        if(hash[store]){
            return store;
        }
        return -1;
    }
};