class Solution {
public:
    int secondHighest(string s) {
        int n=s.size();
        int maxi=INT_MIN;
        int smaxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(s[i]>='0'&&s[i]<='9'){
                int num=s[i]-'0';
                if(num>maxi){
                    smaxi=maxi;
                    maxi=num;
                }
                else if(num>smaxi&&num!=maxi){
                    smaxi=num;
                }
            }
        }
        if(smaxi==INT_MIN){
            return -1;
        }
        return smaxi;
    }
};