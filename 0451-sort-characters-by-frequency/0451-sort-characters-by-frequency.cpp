class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        int hash[256]={0};
        for(int i=0;i<n;i++){
            hash[s[i]]++;
        }
        priority_queue<int>pq;
        for(int i=0;i<256;i++){
           if(hash[i]){
            pq.push(hash[i]);
           }
        }
        bool mark[256]={0};
        string ans;
        while(!pq.empty()){
            int store1=pq.top();
            int store2;
            for(int i=0;i<256;i++){
                if(hash[i]==store1&&mark[i]==0){
                    store2=i;
                    mark[i]=1;
                    break;
                }
            }
            while(store1){
                ans+=store2+'\0';
                store1--;
            }
            pq.pop();
        }
        return ans;
    }
};