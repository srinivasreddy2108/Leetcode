class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int n=words.size();
        string s1="qwertyuiop";
        int hash[256]={0};
        for(int i=0;i<s1.size();i++){
            hash[s1[i]]=1;
            hash[s1[i]-32]=1;
        }
        string s2="asdfghjkl";
        for(int i=0;i<s2.size();i++){
            hash[s2[i]]=2;
            hash[s2[i]-32]=2;
        }
        string s3="zxcvbnm";
        for(int i=0;i<s3.size();i++){
            hash[s3[i]]=3;
            hash[s3[i]-32]=3;
        }
        vector<string>v;
        for(int i=0;i<n;i++){
            int store=hash[words[i][0]]; 
            bool flag=1;
            for(int j=1;j<words[i].size();j++){
                if(store!=hash[words[i][j]]){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                v.push_back(words[i]);
            }
        }
        return v;
    }
};