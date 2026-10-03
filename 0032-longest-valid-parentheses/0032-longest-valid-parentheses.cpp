class Solution {
public:
    int longestValidParentheses(string s) {
        stack<char>st;
        stack<int>index;
        
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){  
                st.push(s[i]);
                index.push(i);
            }
            else{
                if(!st.empty()&&st.top()=='('){
                    st.pop();
                    
                    index.pop();
                }
                else{
                    
                st.push(s[i]);
                index.push(i);
                }
            }
        }
        if(st.empty()){
            return n;
        }
        int maxi=0;
        vector<int>v;
        while(!index.empty()){
            v.push_back(index.top());
            index.pop();
        }
        maxi=max(maxi,n-v[0]-1);
        for(int i=0;i<v.size()-1;i++){
            maxi=max(maxi,v[i]-v[i+1]-1);
        }
        maxi=max(maxi,v[v.size()-1]);
        return maxi;
    }
};