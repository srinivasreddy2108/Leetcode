class Solution {
public:
    bool checkString(string s) {
        
        int n=s.size();
        
        int flag=0;
        int index1=-1;
        int index2=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                index1=i;
            }
            if(s[i]=='b'&&flag==0){
                flag=1;
                index2=i;
            }
        }
        if(index1==-1||index2==-1){
            return 1;
        }
        return index2-index1>0;
    }
};