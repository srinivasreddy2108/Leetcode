class Solution {
public:
    int residuePrefixes(string s) {
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            unordered_set<char>st;
            for(int j=0;j<=i;j++){
                st.insert(s[j]);

            }
            if((i+1)%3==st.size()){
                cnt++;
            }
        }
        return cnt;
    }
};