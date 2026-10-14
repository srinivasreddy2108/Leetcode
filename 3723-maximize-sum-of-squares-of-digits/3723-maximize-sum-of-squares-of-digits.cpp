class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string s;
        int store=0;
        for(int i=1;i<=num;i++){
            store+=9;
        }
        if(store<sum){
            return "";
        }
        for(int i=1;i<=num;i++){
            if(sum-9>=0){
                s+='9';
                sum-=9;
            }
            else if(sum>0){
                char c=sum+'0';
               
                s+=c;
                sum=0;
            }
            else{
                s+='0';
            }
        }
        if(sum>0){
            return "";
        }
        return s;
    }
};