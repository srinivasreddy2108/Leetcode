class Solution {
public:
    int minRotations(string s) {
        int n=s.size();
        int sum=0;
        int prev=0;
        for(int i=0;i<n;i++){
            sum+=min(abs(s[i]-'0'-prev),10-abs(s[i]-'0'-prev));
            prev=s[i]-'0';
        }
        return sum;
    }
};