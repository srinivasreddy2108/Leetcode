class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int n=word1.size();
        int hash1[26]={0};
        int hash2[26]={0};
        for(int i=0;i<n;i++){
            hash1[word1[i]-'a']++;
            hash2[word2[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(!(abs(hash1[i]-hash2[i])<=3)){
                return 0;
            }

        }
        return 1;
    }
};