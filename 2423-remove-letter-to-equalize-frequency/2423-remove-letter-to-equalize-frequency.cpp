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
            unordered_set<int>s;
            for(int j=0;j<26;j++){
                if(hash[j]){
                    s.insert(hash[j]);
                }
            }
            if(s.size()==1){
                return 1;
            }
            hash[i]++;
        }
        return 0;
    }
};