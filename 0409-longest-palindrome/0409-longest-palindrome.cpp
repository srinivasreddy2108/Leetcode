class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        int hash[256]={0};
        for(int i=0;i<n;i++){
            hash[s[i]]++;
        }
        int sum=0;
        bool flag=0;
        for(int i=0;i<256;i++){
            if(hash[i]&&flag==0&&hash[i]%2==1){
                sum+=1;
                flag=1;
            }
            if(hash[i]%2==1){
                sum+=hash[i]-1;
            }
            else{
                sum+=hash[i];
            }
        }
        return sum;
    }
};