class Solution {
public:
    int numPrimeArrangements(int n) {
        int cnt=0;
        for(int i=1;i<=n;i++){
            int count=0;
            for(int j=1;j<=i;j++){
                if(i%j==0){
                    count++;
                }
                if(count>2){
                    break;
                }
            }
            if(count==2){
                cnt++;
            }
        }
        int ans=1;
        long long mod=1e9+7;
        for(int i=1;i<=cnt;i++){
            ans = (1LL * ans * i) % mod;
        }
        for(int i=1;i<=n-cnt;i++){
            ans = (1LL * ans * i) % mod;
        }
        return ans;
    }
};