class Solution {
public:
    int countValidPrefixes(string s) {
        int ones=0;
        int zeroes=0;
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                ones++;

            }
            else{
                zeroes++;
            }
            if(abs(zeroes-ones)<=1){
                count++;
            }
        }
        return count;
    }
};