class Solution {
public:
    int countGoodSubstrings(string s) {
        int count=0;
        if(s.size()<=2){
            return 0;
        }
        for(int i=0;i<=s.size()-3;i++){
            unordered_map<char,int>mpp;
            for(int j=i;j<=i+2;j++){
                mpp[s[j]]+=1;
            }
            if(mpp.size()==3){
                count++;
            }
        }
        return count;
    }
};