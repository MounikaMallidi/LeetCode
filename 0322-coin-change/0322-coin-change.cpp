class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,0));
        for(int target=0;target<=amount;target++){
            if(target%coins[0]==0) dp[0][target]=target/coins[0];
            else dp[0][target]=1e9;
        }
        for(int i=1;i<n;i++){
            for(int target=0;target<=amount;target++){
                int notpick=0+dp[i-1][target];
                int pick=INT_MAX;
                if(coins[i]<=target) pick=1+dp[i][target-coins[i]];
                dp[i][target]=min(pick,notpick);
            }
        }
        int ans=dp[n-1][amount];
        if(ans>=1e9) return -1;
        return ans;
    }
};