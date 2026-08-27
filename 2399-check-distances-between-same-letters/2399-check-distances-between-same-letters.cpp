class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int n=s.size();
        int dist[26]={0};
        for(int i=0;i<n;i++){
            dist[s[i]-'a']=abs(i-dist[s[i]-'a']);
        }
        for(int i=0;i<n;i++){
            if(distance[s[i]-'a']!=dist[s[i]-'a']-1){
                return 0;
            }
        }
        return 1;
    }
};