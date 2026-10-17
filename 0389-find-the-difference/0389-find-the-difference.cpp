class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=s.size();
        int m=t.size();
        int hash1[26]={0};
        int hash2[26]={0};
        for(int i=0;i<n;i++){
            hash1[s[i]-'a']++;
        }
        for(int i=0;i<m;i++){
            hash2[t[i]-'a']++;
        }
        
        for(int i=0;i<26;i++){
            if(hash1[i]-hash2[i]!=0){
                return i+'a';
            }
        }
        return ' ';
    }
};