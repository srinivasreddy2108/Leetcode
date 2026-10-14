class Solution {
public:
    bool equalFrequency(string word) {
        int n=word.size();
        int hash[26]={0};
        for(int i=0;i<n;i++){
            hash[word[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(!hash[i]){
                continue;
            }
            hash[i]--;
            bool flag=1;
            int set;
            int freq=-1;
            for(int j=0;j<26;j++){
                if(hash[j]){
                    if(freq==-1){
                        set=hash[j];
                        freq=0;
                    }
                    else{
                        if(set!=hash[j]){
                            flag=0;
                            break;
                        }
                    }
                }
            }
            if(flag==1){
                return 1;
            }
            hash[i]++;
        }
        return 0;
    }
};