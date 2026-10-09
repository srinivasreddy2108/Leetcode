class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int m=s.size();
        int n=t.size();
        stack<char>st1;
        stack<char>st2;
        for(int i=0;i<m;i++){
            if(s[i]>='a'&&s[i]<='z'){
                st1.push(s[i]);
            }
            else{
                if(!st1.empty())
                    st1.pop();
            }
        }
        for(int i=0;i<n;i++){
            if(t[i]>='a'&&t[i]<='z'){
                st2.push(t[i]);
            }
            else{
                if(!st2.empty())
                    st2.pop();
            }
        }
        while(!st1.empty()&&!st2.empty()){
            if(st1.top()!=st2.top()){
                return 0;
            }
            st1.pop();
            st2.pop();
        }
        if(!st1.empty()){
            return 0;
        }
        if(!st2.empty()){

            return 0;
        }
        return 1;
    }
};