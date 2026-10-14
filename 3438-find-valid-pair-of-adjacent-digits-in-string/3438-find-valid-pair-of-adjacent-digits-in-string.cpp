class Solution {
public:
    string findValidPair(string s) {
        int n=s.size();
        int hash[10]={0};
        for(int i=0;i<n;i+=1){
            hash[s[i]-'0']++;
        }
        string st;
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]&&(hash[s[i]-'0']==s[i]-'0')&&(hash[s[i+1]-'0']==s[i+1]-'0')){
                st+=s[i];
                st+=s[i+1];
                return st;
            }
        }
        return st;
    }
};