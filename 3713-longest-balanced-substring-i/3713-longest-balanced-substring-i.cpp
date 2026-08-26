class Solution {
public:
    int longestBalanced(string s) {
        int n=s.size();
        int maxi=1;
        for(int i=0;i<n;i++){
            int hash[26]={0};
            for(int j=i;j<n;j++){
                hash[s[j]-'a']++;
                int flag=0;
            int flagg=1;
            int store=0;
            for(int l=0;l<26;l++){
                if(hash[l]&&flag==0){
                    flag=1;
                    store=hash[l];
                }
                else{
                    if(store!=hash[l]&&hash[l]){
                        flagg=0;
                        break;
                    }
                }
                
            }
            if(flagg==1){
                maxi=max(maxi,j-i+1);
            }
            }
            
        }
        return maxi; 
    }
};