class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long>v;
        long long rem=num%3;
        if(rem==0){
            v.push_back(num/3-1);
            v.push_back(num/3);
            v.push_back(num/3+1);
        }
        return v;
    }
};