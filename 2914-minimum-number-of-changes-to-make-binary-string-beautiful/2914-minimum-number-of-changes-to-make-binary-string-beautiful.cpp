class Solution {
public:
    int minChanges(string s) {
        int cnt1=0;
        int cnt2=0;
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                cnt1++;
            }
            else{
                cnt2++;
            }
            if(i%2==1){
                if(!(cnt1==2||cnt2==2)){
                    count++;
                }
                    cnt1=0;
                    cnt2=0;
            }
        }
        return count;
    }
};