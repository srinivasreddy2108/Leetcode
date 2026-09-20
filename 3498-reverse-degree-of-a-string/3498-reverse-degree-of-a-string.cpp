class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            int store=26-(s[i]-'a');
            int pro=store*(i+1);
            sum+=pro;
        }
        return sum;
    }
};