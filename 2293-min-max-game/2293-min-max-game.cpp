class Solution {
public:

    int minMaxGame(vector<int>& nums) {
        vector<int>store=nums;
        while(store.size()!=1){
            vector<int>v;
            int cnt=0;
            for(int i=0;i<store.size();i+=2){
                cnt++;
                if(cnt%2==1){
                    v.push_back(min(store[i],store[i+1]));
                }
                else{
                    v.push_back(max(store[i],store[i+1]));
                }
            }
            store=v;
        }
        return store[0];
    }

};