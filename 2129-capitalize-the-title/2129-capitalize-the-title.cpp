class Solution {
public:
    string capitalizeTitle(string title) {
        title.push_back(' ');
        int n=title.size();
        for(int i=0;i<n;i++){
            if(title[i]>='A'&&title[i]<='Z'){
                title[i]+=32;
            }
        }
        vector<string>v;
        string store;
        for(int i=0;i<n;i++){
            if(title[i]==' '){
                v.push_back(store);
                store="";
                continue;
            }
            store+=title[i];
        }
        string ans;
        for(int i=0;i<v.size();i++){
            if(v[i].size()<=2){
                ans+=v[i]+' ';
            }
            else{
                v[i][0]-=32;
                ans+=v[i]+' ';
            }
        }
        ans.pop_back();
        return ans;
    }
};