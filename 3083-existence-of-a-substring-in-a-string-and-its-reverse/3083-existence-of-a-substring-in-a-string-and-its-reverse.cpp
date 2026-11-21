class Solution {
public:
    bool isSubstringPresent(string s) {
        int n=s.size();
        string store=s;
        reverse(store.begin(),store.end());
        unordered_map<string,bool>mpp;
        for(int i=0;i<n-1;i++){
            string t;
            t+=s[i];
            t+=s[i+1];
            mpp[t]=1;
        }
        cout<<mpp.size();
        for(int i=0;i<n-1;i++){
            string t;
            
            t+=store[i];
            t+=store[i+1];
            if(mpp[t]){
                return 1;
            }
        }
        return 0;
    }
};