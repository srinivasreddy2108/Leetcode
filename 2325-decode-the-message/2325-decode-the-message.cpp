class Solution {
public:
    string decodeMessage(string key, string message) {
        int n=key.size();
        char hash[26]={0};
        int j=0;
        bool mark[26]={0};
        for(int i=0;i<n;i++){
            if(key[i]!=' '&&mark[key[i]-'a']==0){
                hash[key[i]-'a']=j+'a';
                mark[key[i]-'a']=1;
                j++;
            }
        }
       
        for(int i=0;i<message.size();i++){
            if(message[i]!=' '){
                message[i]=hash[message[i]-'a'];
            }
        }
        return message;
    }
};