class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n=nums.size();
        int count=0;
        double l=a;
        double m=b;
        for(int i=0;i<n;i++){
            double odd=0;
                double even=0;
            for(int j=i;j<n;j++){
                if(nums[j]%2){
                        odd++;
                    }
                    else{
                        even++;
                    }
                    if(odd>0&&(even/odd)<=(l/m)){
                    count++;
                }
            }
            
        }
        return count;
    }
};