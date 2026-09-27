class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st; 
        string curr = "";
         for(int i = 0; i < s.size(); i++) { 
            if(s[i] == '(') { 
                st.push(curr); curr = ""; 
                }
                 else if(s[i] >= 'a' && s[i] <= 'z') {
                     curr += s[i]; 
                     } 
                     else {
                         reverse(curr.begin(), curr.end());
                      curr = st.top() + curr;
                       st.pop(); 
                       }
                        } 
                        return curr;
    }
};