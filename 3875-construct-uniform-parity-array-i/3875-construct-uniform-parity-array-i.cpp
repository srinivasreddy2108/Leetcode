class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        //starteven
        bool mainflag1=1;
        bool mainflag2=1;
        for(int i=0;i<n;i++){
            bool flag=0;
            
            for(int j=0;j<n;j++){
                if(i==j){
                    if(nums1[i]%2==0){
                flag=1;
                
            }
                }
                else if(nums1[i]-nums1[j]%2==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                mainflag1=0;
            }
        }
        for(int i=0;i<n;i++){
            bool flag2=0;
           
            for(int j=0;j<n;j++){
                if(i==j){
                     if(nums1[i]%2){
                flag2=1;
                
            }
                }
                else if(nums1[i]-nums1[j]%2){
                    flag2=1;
                    break;
                }
            }
            if(flag2==0){
                mainflag2=0;
            }
        }
        return mainflag1||mainflag2;
    }
};