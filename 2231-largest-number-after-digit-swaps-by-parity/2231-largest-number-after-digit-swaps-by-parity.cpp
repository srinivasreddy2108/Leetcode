class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int>pq1;
        priority_queue<int>pq2;
        vector<bool>parity;
        
        while(num){
            int digit=num%10;
            if(digit%2){
                pq1.push(digit);
                parity.push_back(1);
            }
            else{
                pq2.push(digit);
                parity.push_back(0);
            }
            num/=10;
        }
        int numm=0;
        for(int i=parity.size()-1;i>=0;i--){
            if(parity[i]){
                numm=numm*10+pq1.top();
                pq1.pop();
            }
            else{
                numm=numm*10+pq2.top();
                pq2.pop();
            }
        }
        return numm;
    }
};