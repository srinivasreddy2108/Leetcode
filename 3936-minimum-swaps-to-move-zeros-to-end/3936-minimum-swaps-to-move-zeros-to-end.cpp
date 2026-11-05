class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                count++;
        }
        int j=n-1;
        int cnt=0;
        while(count){
            if(nums[j]==0){
                count--;
            }
            else{
                cnt++;
                count--;
            }
            j--;
        }
        return cnt;
    }
};