
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
      int n=arr.size();
      vector<int>v;
      unordered_map<int,int>mpp;
      priority_queue<int>pq;
      for(int i=0;i<n;i++){
        int store=arr[i];
        int count=0;
        while(store){
            count+=store%2;
            store/=2;
        }
        pq.push(count);
        mpp[arr[i]]=count;
      }
      vector<bool>mark(n,0);
      sort(arr.begin(),arr.end());
      while(!pq.empty()){
        for(int i=n-1;i>=0;i--){
            if(pq.top()==mpp[arr[i]]&&mark[i]==0){
                v.push_back(arr[i]);
                mark[i]=1;
                break;
            }
        }
        pq.pop();
      }
      reverse(v.begin(),v.end());
      return v;
    }
};