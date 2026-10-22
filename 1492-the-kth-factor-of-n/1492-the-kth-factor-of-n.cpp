class Solution {
public:
    int kthFactor(int n, int k) {
        int count=0;
        int store=-1;
        
        for(int i=1;i<=n;i++){
            if(n%i==0){
                count++;
                
                if(count==k){
                    store=i;
                    break;
                }
            }
        }
        return store;
    }
};