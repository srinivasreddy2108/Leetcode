class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=s.size();
        stack<char>st;
        int m=part.size();
        for(int i=0;i<n;i++){
            st.push(s[i]);
            if(s[i]==part[m-1]&&st.size()>=m){
                stack<char>store=st;
                string temp;
                int cnt=0;
                while(cnt!=m){
                    temp+=store.top();
                    cnt++;
                    store.pop();
                }
                reverse(temp.begin(),temp.end());
                if(temp==part){
                    cnt=0;
                    while(cnt!=m){
                        st.pop();
                        cnt++;
                    }
                }
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