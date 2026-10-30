class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& q) {
        int n=q.size();
        vector<int>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int sum=0;
            int cnt=-1;
            int j=0;
            while(sum<=q[i]&&j<nums.size()){
                
                sum+=nums[j];
                j++;
                cnt++;
            }
            if(j==nums.size()&&sum<=q[i]){
                v.push_back(nums.size());
            }
            else{
            v.push_back(cnt);
            }
        }
        return v;
    }
};