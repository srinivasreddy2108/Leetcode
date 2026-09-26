class Solution {
public:
    bool checkTwoChessboards(string c1, string c2) {
        return (c1[0]-'a'+1+c1[1]-'0')%2==(c2[0]-'a'+1+c2[1]-'0')%2;
    }
};