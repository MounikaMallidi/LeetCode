class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        int sum=0;
        if(total%2==0){
            sum=total/2;
        }
        else{
            return false;
        }
        vector<vector<bool>> dp(n,vector<bool>(sum+1,0));
        for(int i=0;i<n;i++){
            dp[i][0]=true;
        }
        if(nums[0]<=sum) dp[0][nums[0]]=true;
        for(int i=1;i<n;i++){
            for(int target=1;target<=sum;target++){
                int nottake=dp[i-1][target];
                int take=false;
                if(nums[i]<=target) take=dp[i-1][target-nums[i]];
                dp[i][target]=take|nottake;
            }
        }
        return dp[n-1][sum];
        
    }
};