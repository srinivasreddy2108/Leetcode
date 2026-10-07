class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        vector<int>v;
        for(int i=1;i<=k;i++){
            v.push_back(pq.top());
            pq.pop();
        }
        unordered_map<int,int>mpp;
        for(int i=0;i<v.size();i++){
            mpp[v[i]]++;
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(mpp[nums[i]]){
                ans.push_back(nums[i]);
                mpp[nums[i]]--;
            }
        }
        return ans;
    }
};