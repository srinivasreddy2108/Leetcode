class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        int store1=-1;
        int store2=-1;
        int flag=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='R'){
                    store1=i;
                    store2=j;
                    flag=0;
                    break;
                }
            }
            if(flag==0){
                break;
            }
        }

        bool flag1=0,flag2=0,flag3=0,flag4=0;
        for(int i=store2-1;i>=0;i--){
            if(board[store1][i]=='B'){
                break;
            }
            if(board[store1][i]=='p'){
                flag1=1;
                break;
            }
        }
        
        for(int i=store2+1;i<n;i++){
            if(board[store1][i]=='B'){
                break;
            }
            if(board[store1][i]=='p'){
                flag2=1;
                break;
            }
        }
        for(int i=store1-1;i>=0;i--){
            if(board[i][store2]=='B'){
                break;
            }
            if(board[i][store2]=='p'){
                flag3=1;
                break;
            }
        }
        for(int i=store1+1;i<n;i++){
            if(board[i][store2]=='B'){
                break;
            }
            if(board[i][store2]=='p'){
                flag4=1;
                break;
            }
        }
        return flag1+flag2+flag3+flag4;
    }
};