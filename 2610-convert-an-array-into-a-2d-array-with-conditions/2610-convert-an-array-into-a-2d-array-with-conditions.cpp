class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        int flag=1;
        while(flag){
            vector<int>v;
             flag=0;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            if(it->second){
                v.push_back(it->first);
                it->second--;
                flag=1;
            }
        }
        // if(flag==0){
        //     break;
        // }
        if(!v.empty())
            ans.push_back(v);
        }
        return ans;
    }
};