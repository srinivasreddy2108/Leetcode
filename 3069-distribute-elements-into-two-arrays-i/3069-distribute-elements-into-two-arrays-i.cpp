class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr1;
        vector<int>arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int j=0;
        int k=0;
        for(int i=2;i<n;i++){
            if(arr1[j]>arr2[k]){
                arr1.push_back(nums[i]);
                j++;
            }
            else{
                arr2.push_back(nums[i]);
                k++;
            }
        }
        int m=0;
        for(int l=j+1;l<=j+arr2.size();l++){
            arr1.push_back(arr2[m]);
            m++;
        }
        return arr1;
    }
};