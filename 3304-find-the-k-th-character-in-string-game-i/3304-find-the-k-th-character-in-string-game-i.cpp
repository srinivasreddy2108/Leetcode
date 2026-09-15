class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        
        while(s.size()<=k){    
            string store;
            for(int i=0;i<s.size();i++){
                store+=s[i]+1;
            }
            s+=store;
        }
        return s[k-1];
    }
};