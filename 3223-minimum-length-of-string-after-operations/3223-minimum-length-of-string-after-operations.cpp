class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        int hash[26]={0};
        for(int i=0;i<n;i++){
            hash[s[i]-'a']++;
        }
        int sum=0;
        for(int i=0;i<26;i++){
            
            

            while(hash[i]>=3){
                sum+=2;
                hash[i]-=2;
            }
            
        }
        return n-sum;
    }
};