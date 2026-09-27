class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<int,int>mpp;
        for(int i=0;i<moves.size();i++){
            mpp[moves[i]]+=1;
        }
        if(mpp['U']==mpp['D']&&mpp['L']==mpp['R']){
            return 1;
        }
        return 0;
    }
};