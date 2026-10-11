class Solution {
public:
    string sortString(string s) {
        int hash[26]={0};
        int n=s.size();
        for(int i=0;i<n;i++){
            hash[s[i]-'a']++;
        }
        string ans;
        bool flag=1;
        while(flag){
            flag=0;
            for(int i=0;i<26;i++){
                if(hash[i]){
                    flag=1;
                    ans+=i+'a';
                    hash[i]--;
                }
            }
            flag=0;
            for(int i=25;i>=0;i--){
                if(hash[i]){
                    flag=1;
                    ans+=i+'a';
                    hash[i]--;
                }
            }
        }
        return ans;
    }
};