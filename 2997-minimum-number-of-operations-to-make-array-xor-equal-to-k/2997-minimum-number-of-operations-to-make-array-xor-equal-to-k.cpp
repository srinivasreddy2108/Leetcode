class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int exor=0;
        for(int i=0;i<n;i++){
            exor^=nums[i];
        }
        int cnt=0;
        while(k>0||exor>0){
            if(k%2!=exor%2){
                cnt++;
            }
            k/=2;
            exor/=2;
        }
        return cnt;
    }
};