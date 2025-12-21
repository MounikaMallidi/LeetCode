class Solution {
public:
    bool canSplit(vector<int>& nums, int k, int maxSum) {
        int cnt = 1;
        long long currSum = 0;

        for (int x : nums) {
            if (currSum + x <= maxSum) {
                currSum += x;
            } else {
                cnt++;
                currSum = x;
            }
        }
        return cnt <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canSplit(nums, k, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
