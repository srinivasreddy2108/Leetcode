class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
       int n=score.size();
       priority_queue<int>pq;
       for(int i=0;i<n;i++){
        pq.push(score[i]);
       }
       int count=1;
       vector<int>rank(n,0);
       while(!pq.empty()){
        for(int i=0;i<n;i++){
            if(score[i]==pq.top()){
                 rank[i]=count;
                count++;
                break;
            }
        }
        pq.pop();
       }
       vector<string>ans;
       for(int i=0;i<n;i++){
        if(rank[i]==1){
            ans.push_back("Gold Medal");
        }
        else if(rank[i]==2){
            ans.push_back("Silver Medal");
        }
        else if(rank[i]==3){
            ans.push_back("Bronze Medal");
        }
        else{
            string t;
            while(rank[i]){
                t+=rank[i]%10+'0';
                rank[i]/=10;
            }
            reverse(t.begin(),t.end());
        ans.push_back(t);
        }
       }
       return ans;
    }
};