class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        vector<int>v1(4,0);
        vector<int>v2(4,0);
        vector<int>v3(4,0);
        int j=3;
        while(num1){
            v1[j]=num1%10;
            j--;
            num1/=10;
        }
         j=3;
        while(num2){
            v2[j]=num2%10;
            j--;
            num2/=10;
        }
         j=3;
        while(num3){
            v3[j]=num3%10;
            j--;
            num3/=10;
        }
        int ans=0;
        for(int i=0;i<4;i++){
            int store=min(v1[i],v2[i]);
            store=min(store,v3[i]);
            ans=ans*10+store;
        }
        return ans;
    }
};