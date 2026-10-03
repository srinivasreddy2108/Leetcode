class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>lmaxi;
        vector<int>rmaxi;
        int n=height.size();
        int maxi=-1;
        for(int i=0;i<n;i++){
            
            if(height[i]>maxi){
                maxi=height[i];
            }
            lmaxi.push_back(maxi);
        }
        int maxii=-1;
        for(int i=n-1;i>=0;i--){
            
            if(height[i]>maxii){
                maxii=height[i];
            }
            rmaxi.push_back(maxii);
        }
        reverse(rmaxi.begin(),rmaxi.end());
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=min(rmaxi[i],lmaxi[i])-height[i];
        }
        return sum;
    }
};