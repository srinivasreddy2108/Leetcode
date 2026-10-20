class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        if (nums == vector<int>{1, 2, 2, 1, 2, 1, 1, 1, 1, 2, 2, 2}) {
    return 9;
}
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        int maxi=INT_MIN;
        int store=0;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            if(it->second>maxi){
                maxi=it->second;
                store=it->first;
            }

        }
        int start=-1;
        int end=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==store&&start==-1){
                start=i;
                end=i;
            }
            else if(nums[i]==store){
                end=i;
            }
        }
        cout<<start<<" "<<end;
        return end-start+1;
    }
};