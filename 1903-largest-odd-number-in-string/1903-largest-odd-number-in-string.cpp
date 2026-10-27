class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        string ans;
        for(int i=n-1;i>=0;i--){
            if((num[i]-'0')%2){
                for(int k=0;k<=i;k++){
                    ans+=num[k];
                }
                break;
            }
        }
        return ans;
    }
};