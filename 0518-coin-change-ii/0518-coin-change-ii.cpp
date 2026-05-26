class Solution {
public:
    int change(int amount, vector<int>& coins) {

        int n=coins.size();

        vector<vector<unsigned int>> dp(
            n,
            vector<unsigned int>(amount+1,0)
        );

        for(int target=0;target<=amount;target++){
            dp[0][target]=(target%coins[0]==0);
        }

        for(int idx=1;idx<n;idx++){

            for(int target=0;target<=amount;target++){

                unsigned int notpick=
                    dp[idx-1][target];

                unsigned int pick=0;

                if(coins[idx]<=target)
                    pick=
                    dp[idx][target-coins[idx]];

                dp[idx][target]=pick+notpick;
            }
        }

        return dp[n-1][amount];
    }
};