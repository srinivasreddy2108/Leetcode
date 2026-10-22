#include<string.h>
class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size()>k){
            string t;
            int count=0;
            int sum=0;
            for(int i=0;i<s.size();i++){
                count++;
                sum+=s[i]-'0';
                if(count==k){
                    t+=to_string(sum);
                    count=0;
                    sum=0;
                }
            }
            if(count){
                t+=to_string(sum);
            }
            s=t;
        }
        return s;
    }
};