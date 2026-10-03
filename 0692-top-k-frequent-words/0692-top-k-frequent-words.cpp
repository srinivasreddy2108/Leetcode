class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n=words.size();
        unordered_map<string,int>mpp;
        for(int i=0;i<n;i++){
            mpp[words[i]]++;
        }
        priority_queue<int>pq;
        for(auto it =mpp.begin();it!=mpp.end();it++){
            pq.push(it->second);
        }
        vector<string>ans;
        while(k--){
            int store=pq.top();
            string temp="\xFF";
            int index=-1;
            for(int i=0;i<n;i++){
                if(mpp[words[i]]==store&&words[i]<temp){
                    temp=words[i];
                    index=i;
                    
                }
            }
            ans.push_back(words[index]);
            mpp[words[index]]=0;
            pq.pop();
        }
        return ans;
    }
};