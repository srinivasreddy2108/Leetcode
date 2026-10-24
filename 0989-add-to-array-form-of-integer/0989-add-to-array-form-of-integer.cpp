class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>v;
        while(k){
            v.push_back(k%10);
            k/=10;
        }
        reverse(v.begin(),v.end());
        int i=num.size()-1;
        int j=v.size()-1;
        int carry=0;
        vector<int>ans;
        while(i>=0&&j>=0){
            int x=num[i]+v[j]+carry;
            int sum=x%10;
            carry=x/10;
            ans.push_back(sum);
            i--;
            j--;
        }
        while(i>=0){
            int x=num[i]+carry;
            int sum=x%10;
            carry=x/10;
            ans.push_back(sum);
            i--;
        }
        while(j>=0){
            int x=v[j]+carry;
            int sum=x%10;
            carry=x/10;
            ans.push_back(sum);
            j--;
        }
        if(carry){
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};