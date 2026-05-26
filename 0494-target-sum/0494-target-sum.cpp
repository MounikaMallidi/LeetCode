class Solution {
public:
    int perfectSum(vector<int>& arr, int sum) {
        // code here
        int n=arr.size();
        vector<vector<int>> dp(n,vector<int>(sum+1,0));
         if(arr[0]==0)
            dp[0][0]=2;
        else
            dp[0][0]=1;

        if(arr[0]!=0 && arr[0]<=sum)
            dp[0][arr[0]]=1;

        for(int i=1;i<n;i++){
            for(int target=0;target<=sum;target++){
                int notpick=dp[i-1][target];
                int pick=0;
                if(arr[i]<=target) pick=dp[i-1][target-arr[i]];
                dp[i][target]=pick+notpick;
            }
        }
        return dp[n-1][sum];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int totSum=0;
        for(int i=0;i<nums.size();i++){
            totSum+=nums[i];
        }
        if(totSum-target<0 || (totSum-target)%2!=0) return 0;
        return perfectSum(nums,(totSum-target)/2);
    }
};