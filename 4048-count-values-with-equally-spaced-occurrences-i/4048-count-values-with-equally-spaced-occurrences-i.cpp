class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mpp[nums[i]]!=3){
                continue;
            }
            int first=0,second=0,third=0;
            int f1=-1,f2=-1,f3=-1;
            for(int j=i;j<n;j++){
                if(nums[i]==nums[j]&&f1==-1){
                    first=j;
                    f1=0;
                }
                else if(nums[j]==nums[i]&&f2==-1){
                    second=j;
                    f2=0;
                }
                else if(nums[j]==nums[i]&&f3==-1){
                    third=j;
                    f3=0;
                }
            }
            if(first+third==2*second){
                cnt++;
            }
        }
        return cnt;
    }
};