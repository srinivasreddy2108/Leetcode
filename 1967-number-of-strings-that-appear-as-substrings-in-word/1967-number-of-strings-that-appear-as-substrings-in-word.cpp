class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n=patterns.size();
        int m=word.size();
        int cnt=0;
        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){
                string s;
                int flag=1;
                for(int k=j;k<m;k++){
                    s+=word[k];
                    if(s==patterns[i]){
                        cnt++;
                        flag=0;
                        break;
                    }
                }
                if(flag==0){
                    break;
                }
            }
        }
        return cnt;
    }
};