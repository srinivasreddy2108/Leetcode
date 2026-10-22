class Solution {
public:
    string addBinary(string a, string b) {
        int m=a.size();
        int n=b.size();
        int i=m-1;
        int j=n-1;
        string s;
        int carry=0;
        while(i>=0&&j>=0){
            int num=a[i]-'0'+b[j]-'0'+carry;
            int sum=num%2;
            s+=sum+'0';
            carry=num/2;
            i--;
            j--;
        }
        while(i>=0){
            int num=a[i]-'0'+carry;
            int sum=num%2;
            s+=sum+'0';
            carry=num/2;
            i--;
        }
        while(j>=0){
            int num=b[j]-'0'+carry;
            int sum=num%2;
            s+=sum+'0';
            carry=num/2;
            j--;
        }
        if(carry){
            s+='1';
        }
        reverse(s.begin(),s.end());
        return s;
    }
};