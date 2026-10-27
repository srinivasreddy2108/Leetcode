class Solution {
public:
    char findKthBit(int n, int k) {
        if(n==1){
            return '0';
        }
       vector<string>store;
       string store1="0";
       string ans;
       for(int i=2;i<=n;i++){
            string store2=store1;
            for(int j=0;j<store1.size();j++){
                if(store1[j]=='1'){
                    store1[j]='0';
                }
                else{
                    store1[j]='1';
                }
            }
            reverse(store1.begin(),store1.end());
             ans=store2+"1"+store1;
            store1=ans;
       }
       char c;
       int x;
       for(int i=0;i<ans.size();i++){
        if(i==k-1){
            c=ans[i];
            x=i;
            break;
        }
       }
       cout<<x;
       return c;
    }
};