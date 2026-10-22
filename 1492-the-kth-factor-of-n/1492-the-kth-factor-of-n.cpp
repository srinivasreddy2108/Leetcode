class Solution {
public:
    int kthFactor(int n, int k) {
        int count=0;

        vector<int>v1;
        vector<int>v2;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                count++;
                v1.push_back(i);
                if(n/i!=i){
                    count++;
                    v2.push_back(n/i);
                }
            }
        }
        if(count<k){
            return -1;
        }
        else if(k<=v1.size()){
            return v1[k-1];
        }
        return v2[count-k];
    }
};