class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        vector<int>ans;
        while(ans.size()<n){
            
            for(auto it=mpp.begin();it!=mpp.end();it++){
                if(it->second>0){
                ans.push_back(it->first);
                it->second--;
                
                }
            }
            
        }
        return ans;
    }
};