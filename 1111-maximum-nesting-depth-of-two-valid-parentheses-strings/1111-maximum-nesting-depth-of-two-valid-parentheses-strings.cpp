class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n=seq.size();
        int count=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(seq[i]=='('){
                count++;

                v.push_back(count);
            }
            else if(seq[i]==')'){
                v.push_back(count);
                count--;
            }
            
        }
        int m=v.size();
        int maxi=-1;
        for(int i=0;i<m;i++){
            maxi=max(maxi,v[i]);
        }
        vector<int>ans(m,0);
        for(int i=0;i<n;i++){
            if(v[i]%2){
                ans[i]=1;
                
            }
            
        }
        return ans;
    }
};