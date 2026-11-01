class Solution {
public:
    string toGoatLatin(string s) {
        s.push_back(' ');
        int n=s.size();
        vector<string>v;
        string store="";
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                v.push_back(store);
                store="";
                continue;
            }
            store+=s[i];
        }
        int m=v.size();
        int count=1;
        string ans;
        for(int i=0;i<m;i++){
            if((v[i][0]=='a')||(v[i][0]=='e')||(v[i][0]=='i')||(v[i][0]=='o')||(v[i][0]=='u')||
            (v[i][0]=='A')||(v[i][0]=='E')||(v[i][0]=='I')||(v[i][0]=='O')||(v[i][0]=='U')){
                ans+=v[i]+"ma";
                for(int j=1;j<=count;j++){
                    ans+='a';
                }
            }
            else{
                for(int k=1;k<v[i].size();k++){
                    ans+=v[i][k];
                }
                ans+=v[i][0];
                ans+="ma";
                for(int j=1;j<=count;j++){
                    ans+='a';
                }
            }
            count+=1;
            ans+=' ';
        }
        ans.pop_back();
        return ans; 
    }
};