
class Solution {
public:
    int getLeastFrequentDigit(int n) {
        int hash[10]={0};
        int mini=INT_MAX;
        while(n){
            hash[n%10]++;
           
            n/=10;
        }
        for(int i=0;i<10;i++){
            if(hash[i]&&hash[i]<mini){
                mini=hash[i];
            }
        }
        for(int i=0;i<10;i++){
            if(hash[i]==mini){
                return i;
            }
        }
        return 1;
    }
};