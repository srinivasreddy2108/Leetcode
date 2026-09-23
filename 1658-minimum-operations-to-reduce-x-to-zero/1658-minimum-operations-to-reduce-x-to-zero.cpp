class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();

        int sum1 = 0;

        for(int i = 0; i < n; i++) {
            sum1 += nums[i];
        }

        int target = sum1 - x;

        if(target < 0) {
            return -1;
        }

        if(target == 0) {
            return n;
        }

        int left = 0;
        int sum2 = 0;
        int maxi = -1;

        for(int right = 0; right < n; right++) {
            sum2 += nums[right];

            while(sum2 > target) {
                sum2 -= nums[left];
                left++;
            }

            if(sum2 == target) {
                maxi = max(maxi, right - left + 1);
            }
        }

        if(maxi == -1) {
            return -1;
        }

        return n - maxi;
    }
};