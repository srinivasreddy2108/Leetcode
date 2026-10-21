class Solution {
public:
    string resultingString(string s) {
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++){
            if(!st.empty()&&(st.top()-'a'==(s[i]-'a'+1)%26||st.top()-'a'==(s[i]-'a'-1)%26||s[i]-'a'==(st.top()-'a'+1)%26||s[i]-'a'==(st.top()-'a'-1)%26)){
                st.pop();

            }
            else{
                st.push(s[i]);
            }
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};