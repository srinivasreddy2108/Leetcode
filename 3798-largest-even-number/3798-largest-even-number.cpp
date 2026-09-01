class Solution {
public:
    string largestEven(string s) {
        int n=s.size();
        string store;
        string ans;
        for(int i=0;i<n;i++){
            ans+=s[i];
            if(s[i]=='2'){
                store=ans;
            }
        }
        return store;
    }
};