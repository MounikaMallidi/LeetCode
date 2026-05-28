class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,1);
        vector<int> count(n,1);
        int maxi=1;
        for(int idx=0;idx<n;idx++){
            for(int prev=0;prev<=idx-1;prev++){
                if(nums[idx]>nums[prev] && 1+dp[prev]>dp[idx]){
                    dp[idx]=1+dp[prev];
                    count[idx]=count[prev];
                }
                else if(1+dp[prev]==dp[idx]){
                    count[idx]+=count[prev];
                }
            }
            maxi=max(maxi,dp[idx]);
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(dp[i]==maxi){
                cnt+=count[i];
            }
        }
        return cnt;
    }
};