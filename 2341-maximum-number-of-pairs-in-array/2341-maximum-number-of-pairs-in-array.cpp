class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<int>v;
        int pair=0;
        int count=0;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            pair+=it->second/2;
            count+=it->second%2;
        }
        v.push_back(pair);
        v.push_back(count);
        return v;
    }
};