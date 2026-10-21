class Solution {
public:
    string makeGood(string s) {
        int n=s.size();
        stack<char>st;
        string ans;
        for(int i=n-1;i>=0;i--){
            if(!st.empty()&&(st.top()==s[i]+32||st.top()==s[i]-32)){
                st.pop();

            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        
        return ans;
    }
};