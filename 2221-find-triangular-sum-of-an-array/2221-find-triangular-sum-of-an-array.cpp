class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>v=nums;
        while(v.size()!=1){
            vector<int>store;
            for(int i=0;i<v.size()-1;i++){
                store.push_back((v[i]+v[i+1])%10);
            }
            v.clear();
            v=store;
        }
        return v[0];
    }
};