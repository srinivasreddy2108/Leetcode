class Solution {
public:
    int minDeletion(string s, int k) {
        int n=s.size();
        int sum=0;
        int hash[26]={0};
        for(int i=0;i<n;i++){
            hash[s[i]-'a']+=1;
        }
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<26;i++){
            if(hash[i]){
                pq.push(hash[i]);
            }
        }
        if(pq.size()<=k){
            return 0;
        }
        while(!pq.empty()&&pq.size()!=k){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};