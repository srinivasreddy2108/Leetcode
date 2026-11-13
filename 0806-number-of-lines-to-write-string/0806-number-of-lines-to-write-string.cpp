class Solution {
public:
    vector<int> numberOfLines(vector<int>& w, string s) {
        int n=s.size();
        int sum=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            sum+=w[s[i]-'a'];
            if(sum>100){
                cnt+=1;
                sum=w[s[i]-'a'];
            }
        }
        cnt++;
        vector<int>v;
        v.push_back(cnt);
        v.push_back(sum);
        return v;
    }
};