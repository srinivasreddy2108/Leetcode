class Solution {
public:
    int splitNum(int num) {
        vector<int>v;
        while(num){
            v.push_back(num%10);
            num/=10;
        }
        int n=v.size();
        int sum1=0;
        int sum2=0;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(i%2==0){
                sum1=sum1*10+v[i];
            }
            else{
                sum2=sum2*10+v[i];
            }
        }
        return sum1+sum2;
    }
};