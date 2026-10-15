class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        int n=ranks.size();
        int hash1[26]={0};
        for(int i=0;i<n;i++){
            hash1[suits[i]-'a']++;
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(hash1[i]){
                count++;
            }
        }
        if(count==1){
            return "Flush";
        }
        int hash2[14]={0};
        for(int i=0;i<n;i++){
            hash2[ranks[i]]++;
        }
        bool flag1=0;
        bool flag2=0;
        for(int i=0;i<14;i++){
            if(hash2[i]>=3){
                flag1=1;
            }
            else if(hash2[i]>=2){
                flag2=1;
            }
        }
        if(flag1==1){
            return "Three of a Kind";
        }
        if(flag2==1){
            return "Pair";
        }
        return "High Card";
    }
};