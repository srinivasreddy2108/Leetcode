class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int pro=1;
        int store=n;
        while(store){
            sum+=store%10;
            pro*=store%10;
            store/=10;
        }
        return n%(sum+pro)==0;
    }
};