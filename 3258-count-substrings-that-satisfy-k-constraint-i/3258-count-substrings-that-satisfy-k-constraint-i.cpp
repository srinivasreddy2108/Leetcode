class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
            int sum1=0;
            int sum2=0;
            for(int j=i;j<n;j++){
                if(s[j]=='1'){
                    sum1+=1;
                }
                else{
                    sum2+=1;
                }
                if(sum1<=k||sum2<=k){
                    count++;
                }
            
            }
        }
        return count;
    }
};