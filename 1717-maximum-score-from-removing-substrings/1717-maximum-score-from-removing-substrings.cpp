class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int n=s.size();
        int sum1=0,sum2=0;
        //first ab
        stack<char>st1;
        for(int i=0;i<n;i++){
            if(!st1.empty()&&s[i]=='b'&&st1.top()=='a'){
                st1.pop();
                sum1+=x;
            }
            else{
                st1.push(s[i]);
            }
        }
        stack<char>s1;
        while(!st1.empty()){
            if(!s1.empty()&&st1.top()=='b'&&s1.top()=='a'){
                sum1+=y;
                s1.pop();
            }
            else{
                s1.push(st1.top());
            }
            st1.pop();
        }
        stack<char>st2;
        for(int i=0;i<n;i++){
            if(!st2.empty()&&s[i]=='a'&&st2.top()=='b'){
                st2.pop();
                sum2+=y;
            }
            else{
                st2.push(s[i]);
            }
        }
        stack<char>s2;
        while(!st2.empty()){
            if(!s2.empty()&&st2.top()=='a'&&s2.top()=='b'){
                sum2+=x;
                s2.pop();
            }
            else{
                s2.push(st2.top());
            }
            st2.pop();
        }
        return max(sum1,sum2);
    }
};