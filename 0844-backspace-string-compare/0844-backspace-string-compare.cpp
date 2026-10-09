class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int m=s.size();
        int n=t.size();
        vector<bool>v1(m,0);
        vector<bool>v2(n,0);
        for(int i=0;i<m;i++){
            
            if(s[i]=='#'){
                v1[i]=1;
                for(int j=i-1;j>=0;j--){
                    if(v1[j]==0){
                        v1[j]=1;
                        break;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            
            if(t[i]=='#'){
                v2[i]=1;
                for(int j=i-1;j>=0;j--){
                    if(v2[j]==0){
                        v2[j]=1;
                        break;
                    }
                }
            }
        }
        string s1;
        string s2;
        for(int i=0;i<m;i++){
            if(v1[i]==0){
                s1+=s[i];
            }
        }
        
        for(int i=0;i<n;i++){
            if(v2[i]==0){
                s2+=t[i];
            }
        }
        cout<<s1<<" "<<s2;
        return s1==s2;
    }
};