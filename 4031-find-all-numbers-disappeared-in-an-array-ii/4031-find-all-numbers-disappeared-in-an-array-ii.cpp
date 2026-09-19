class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        nums.push_back(upper+1);
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        int flag=0;
        int start=0,end=0;
        vector<vector<int>>ans;
        int has=0;
        for(int i=lower;i<=upper+1;i++){
            if(!mpp[i]){
                if(flag==0){
                    start=i;
                    flag=1;
                }
                end=i;
                has=1;
            }
            else{
                if(has){
                vector<int>v;
                v.push_back(start);
                v.push_back(end);
                flag=0;
                ans.push_back(v);
                has=0;
                }
            }
        }
        return ans;
    }
};