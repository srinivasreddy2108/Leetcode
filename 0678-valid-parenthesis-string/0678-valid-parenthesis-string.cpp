class Solution {
public:
    bool checkValidString(string s) {
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i+=1){
            if(s[i]=='*'||s[i]=='('){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
                else{
                    return 0;
                }
            }
        }
        stack<char>st1;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='*'||s[i]==')'){
                st1.push(s[i]);
            }
            else{
                if(!st1.empty()){
                    st1.pop();
                }
                else{
                    return 0;
                }
            }
        }
        return 1;
    }
};