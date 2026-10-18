class Solution {
public:
    int minDeletion(string s, int k) {
        int n=s.size();
        int sum=0;
        int hash[26]={0};
        for(int i=0;i<n;i++){
            hash[s[i]-'a']+=1;
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(hash[i]){
                count++;
            }
        }
        for(int i=1;i<=count-k;i++){
            int mini=INT_MAX;
            int store=-1;
            for(int j=0;j<26;j++){
                if(hash[j]<mini&&hash[j]){
                    mini=hash[j];
                    store=j;
                }
            }
            hash[store]=0;
            sum+=mini;

        }
        return sum;
    }
};