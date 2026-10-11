class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
       unordered_map<int,int>mpp;
       for(int i=lowLimit;i<=highLimit;i++){
        int store=i;
        int sum=0;
        while(store){
            sum+=store%10;
            store/=10;
        }
        mpp[sum]++;
       }
       int maxi=INT_MIN;
       for(auto it =mpp.begin();it!=mpp.end();it++){
        maxi=max(maxi,it->second);
       }
       return maxi;
    }
};