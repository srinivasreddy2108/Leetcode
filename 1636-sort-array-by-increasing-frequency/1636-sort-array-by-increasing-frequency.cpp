class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n=nums.size();
        int hash[201]={0};
        vector<int>ans;
        for(int i=0;i<n;i++){
            hash[nums[i]+100]++;
        }
        priority_queue<int>pq;
        for(int i=0;i<201;i++){
            if(hash[i]){
            pq.push(hash[i]);
            }
        }
        int mark[201]={0};
        while(!pq.empty()){
            int store1=pq.top();
            int store2;
            for(int i=0;i<201;i++){
                if(hash[i]==store1&&mark[i]==0){
                    store2=i;
                    mark[i]=1;
                    break;
                }
            }
            while(store1){
                ans.push_back(store2-100);
                store1--;
            }
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};