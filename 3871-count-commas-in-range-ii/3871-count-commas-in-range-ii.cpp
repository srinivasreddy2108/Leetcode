class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000){

            return 0;
        }
        int digit=0;
        long long store=n;
        while(store){
            digit++;
            store/=10;
        }
        long long sum=0;
        for(int i=4;i<digit;i++){
            long long num=9;
            for(int j=1;j<i;j++){
                num*=10;
            }
            int no=(i-1)/3;
            sum+=num*no;
        }
        long long x=1;
        for(int i=1;i<digit;i++){
            x*=10;
        }
        sum+=(n-x+1)*((digit-1)/3);
        return sum;
    }
};