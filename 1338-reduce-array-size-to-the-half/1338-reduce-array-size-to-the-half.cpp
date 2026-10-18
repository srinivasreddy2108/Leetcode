class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        priority_queue<int>pq;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            pq.push(it->second);
        }
        int cnt=0;
        int sum=0;
        while(sum<n/2){
            sum+=pq.top();
            cnt+=1;
            pq.pop();
        }
        return cnt;
    }
};