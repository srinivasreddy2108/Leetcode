class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n=arr.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto it =mpp.begin();it!=mpp.end();it++){
            pq.push(it->second);
        }
        int cnt=0;
        while(!pq.empty()){
            if(pq.top()<=k){
                k-=pq.top();
                cnt++;

                pq.pop();
            }
            else{
                break;
            }
        }
        return mpp.size()-cnt;
    }
};