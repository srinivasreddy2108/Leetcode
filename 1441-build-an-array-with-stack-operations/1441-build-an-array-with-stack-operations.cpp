class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int m=target.size();
        int hash[101]={0};
        int maxi=INT_MIN;
        for(int i=0;i<m;i++){
            hash[target[i]]++;
            maxi=max(maxi,target[i]);
        }
        vector<string>ans;
        for(int i=1;i<=maxi;i++){
            if(hash[i]){

                ans.push_back("Push");
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};