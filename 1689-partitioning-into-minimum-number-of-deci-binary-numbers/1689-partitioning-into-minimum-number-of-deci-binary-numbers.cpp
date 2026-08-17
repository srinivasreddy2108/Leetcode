class Solution {
public:
    int minPartitions(string n) {
        int m=n.size();
        int maxi=INT_MIN;
        for(int i=0;i<m;i++){
            maxi=max(maxi,n[i]-'0');
        }
        return maxi;
    }
};