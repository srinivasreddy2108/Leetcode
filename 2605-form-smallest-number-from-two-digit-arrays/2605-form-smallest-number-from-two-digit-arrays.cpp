class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int min1=10,min2=10;
        int mpp[10]={0};
        for(int i=0;i<m;i++){
            mpp[nums1[i]]++;
            min1=min(min1,nums1[i]);
        }

        int store=0;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            if(mpp[nums2[i]]){
                mini=min(mini,nums2[i]);
            }
            min2=min(min2,nums2[i]);
        }
        if(mini!=INT_MAX){
            return mini;
        }
        if(min1<min2){
            return min1*10+min2;
        }
        return min2*10+min1;
    }
};