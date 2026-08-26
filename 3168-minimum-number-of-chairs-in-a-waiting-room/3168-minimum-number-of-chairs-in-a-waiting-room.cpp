class Solution {
public:
    int minimumChairs(string s) {
        int count=0;
        int chairs=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='E'){
                count++;
                if(chairs<count){
                    chairs++;
                }
                
            }
            else{
                count--;
            }
        }
        return chairs;
    }
};