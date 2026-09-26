class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        stack<char>st;
        unordered_map<string,string>mpp;
        for(int i=0;i<knowledge.size();i++){
            mpp[knowledge[i][0]]=knowledge[i][1];
        }
        int n=s.size();
        string ans;
        int flag=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='('){
                string store;
                while(!st.empty()&&st.top()!=')'){
                    store+=st.top();
                    st.pop();
                }
                if(mpp[store]==""){
                    ans+='?';
                }
                else{
                string store2=mpp[store];
                reverse(store2.begin(),store2.end());
                ans+=store2;
                }
                st.pop();
                flag=0;
            }
            else if(s[i]==')'){
                flag=1;
                st.push(s[i]);
            }
            else{
                st.push(s[i]);
                if(flag==0){
                ans+=s[i];
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};