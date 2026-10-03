class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mpp1;
        for(int i=0;i<n;i++){
            mpp1[nums[i]]++;
        }
        priority_queue<int>pq;
        for(auto it=mpp1.begin();it!=mpp1.end();it++){
            pq.push(it->second);
        }
        vector<int>ans;
        for(int i=1;i<=k;i++){
            int store=pq.top();
            for(int j=0;j<n;j++){
                if(mpp1[nums[j]]==store){
                    ans.push_back(nums[j]);
                    mpp1[nums[j]]=0;
                    break;
                }
            }
            pq.pop();
        }
        return ans;
    }
};