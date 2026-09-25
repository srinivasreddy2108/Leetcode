class Solution {
public:
    bool squareIsWhite(string c) {
        int sum=c[0]-'a'+c[1]-'0'+1;
        return sum%2==1;
    }
};