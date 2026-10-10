class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int n=words.size();
        int hash1[26]={0};
        int ans=0;
        for(int i=0;i<chars.size();i++){
            hash1[chars[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            int hash2[26]={0};
            for(int k=0;k<26;k++){
                hash2[k]=hash1[k];
            }
            bool flag=1;
            for(int j=0;j<words[i].size();j++){
                if(!hash2[words[i][j]-'a']){
                    flag=0;
                    break;
                }
                else{
                    hash2[words[i][j]-'a']--;
                }
            }
            if(flag==1){
                ans+=words[i].size();
            }
        }
        return ans;
    }
};