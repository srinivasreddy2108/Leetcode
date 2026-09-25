class Solution {
public:
    int countPoints(string rings) {
        int n=rings.size();
        int sum=0;
        vector<int>v(10,0);
        for(int i=0;i<n;i+=2){
            bool blue=0;
            bool red=0;
            bool green=0;
            for(int j=i;j<n;j+=2){
                if(rings[j+1]==rings[i+1]){
                    if(rings[j]=='B'){
                        blue=1;
                    }
                    else if(rings[j]=='R'){
                        red=1;
                    }
                    else if(rings[j]=='G'){
                        green=1;
                    }
                }
            }
            if(blue&&green&&red)
                v[rings[i+1]-'0']=1;
        }
        for(int i=0;i<10;i++){
            sum+=v[i];
        }
        return sum;
    }

};