class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n=garbage.size();
        int pmaxi=-1;
        int gmaxi=-1;
        int mmaxi=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<garbage[i].size();j++){
                if(garbage[i][j]=='P'){
                    pmaxi=i;
                    
                }
                else if(garbage[i][j]=='G'){
                    gmaxi=i;
                    
                }
                else{
                    mmaxi=i;
                   
                }
            }
        }
        int sum1=0;
        int sum2=0;
        int sum3=0;
        for(int j=0;j<garbage[0].size();j++){
            if(garbage[0][j]=='P'){
                    sum1++;
                }
                else if(garbage[0][j]=='G'){
                    sum2++;
                }
                else if(garbage[0][j]=='M'){
                    sum3++;
                }
        }
        
        for(int i=1;i<=pmaxi;i++){
            sum1+=travel[i-1];
            for(int j=0;j<garbage[i].size();j++){
                if(garbage[i][j]=='P'){
                    sum1++;
                }
            }
        }
        
        for(int i=1;i<=gmaxi;i++){
            sum2+=travel[i-1];
            for(int j=0;j<garbage[i].size();j++){
                if(garbage[i][j]=='G'){
                    sum2++;
                }
            }
        }
        
        for(int i=1;i<=mmaxi;i++){
            sum3+=travel[i-1];
            for(int j=0;j<garbage[i].size();j++){
                if(garbage[i][j]=='M'){
                    sum3++;
                }
            }
        }
        return sum1+sum2+sum3;
    }
};