class Solution {
public:
    int maximum69Number (int num) {
        vector<int>v;
        int store=num;
        while(store){
            v.push_back(store%10);
            store/=10;
        }
        int rev=0;
        int flag=-1;
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]==6&&flag==-1){
                rev=rev*10+9;
                flag=0;
            }
            else{
                rev=rev*10+v[i];
            }
        }
        return rev;
    }
};