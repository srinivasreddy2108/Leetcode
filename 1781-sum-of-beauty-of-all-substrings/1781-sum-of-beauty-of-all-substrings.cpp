class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int hash[26]={0};
                for(int k=i;k<=j;k++){
                    hash[s[k]-'a']++;
                }
                int mini=INT_MAX;
                int maxi=INT_MIN;
                for(int l=0;l<26;l++){
                    if(hash[l]>maxi&&hash[l]){
                        maxi=hash[l];
                    }
                    if(hash[l]<mini&&hash[l]){
                        mini=hash[l];
                    }
                }
                if(maxi!=mini){
                    sum+=maxi-mini;
                }
                
            }
            
        }
        return sum;
    }
};