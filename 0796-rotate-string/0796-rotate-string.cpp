class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        int m=goal.size();
        if(m!=n){
            return 0;
        }
        for(int i=1;i<=n;i++){
            char c=goal[n-1];
            for(int j=n-2;j>=0;j--){
                goal[j+1]=goal[j];
            }
            goal[0]=c;
            if(goal==s){
                return 1;
            }
        }
        return 0;
    }
};