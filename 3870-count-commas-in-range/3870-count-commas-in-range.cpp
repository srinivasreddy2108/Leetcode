class Solution {
public:
    int countCommas(int n) {
        int digit1=0;
        int m=n;
        while(m){
            digit1++;
            m/=10;
        }
        if(digit1<=3){
            return 0;
        }

        int count=0;
        for(int i=1000;i<=n;i++){
            int digit2=0;
            int store=i;
            while(store){
                digit2++;
                store/=10;
            }
            while(digit2){
                count++;
                digit2/=1000;
            }
            
        }
        return count;
    }
};