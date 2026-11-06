class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int n=words.size();
        unordered_set<string>s;
        vector<string>v={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i=0;i<n;i++){
            string store;
            for(int j=0;j<words[i].size();j++){
                store+=v[words[i][j]-'a'];
            }
            s.insert(store);
        }
        return s.size();
    }
};