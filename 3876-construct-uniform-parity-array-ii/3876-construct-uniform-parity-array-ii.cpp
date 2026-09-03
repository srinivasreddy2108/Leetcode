class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int n=nums.size();
        int sodd=INT_MAX;
        int seven=INT_MAX;
        int store1=-1;
        int store2=-1;
        for(int i=0;i<n;i++){
            if(nums[i]%2){
                if(nums[i]<sodd){
                    sodd=nums[i];
                    store1=i;
                }
            }
            else{
                if(nums[i]<seven){
                    seven=nums[i];
                    store2=i;
                }
            }
        }
        bool flag1=1;
        bool flag2=1;
        for(int i=0;i<n;i+=1){
            if((nums[i]%2)||((nums[i]-sodd>=1)&&((nums[i]-sodd)%2)) ){

            }
            else{
                flag1=0;
            }
            
        }
            for(int i=0;i<n;i+=1){
            if((nums[i]%2==0)||((nums[i]-seven>=1)&&((nums[i]-seven)%2==0)) ){

            }
            else{
                flag2=0;
            }
            }
            return flag1||flag2;
    }
};