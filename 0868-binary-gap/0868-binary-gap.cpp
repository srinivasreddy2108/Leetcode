class Solution {
public:
    int binaryGap(int n) {
        vector<bool>v(32,0);
        int j=31;
        while(n){
            v[j]=n%2;
            j--;
            n/=2;
        }
        for(int i=0;i<32;i++){
            cout<<v[i]<<" ";
        }
        int maxi=0;
        for(int i=0;i<32;i++){
            if(v[i]!=1){
                continue;
            }
            for(int j=i+1;j<32;j++){
                if(v[j]==1){
                    maxi=max(maxi,abs(j-i));
                    break;
                }
            }
        }
        return maxi;
    }
};