class Solution {
public:
    int robber(vector<int> &temp){
        int n=temp.size();
        vector<int> dp(n);
        if(n==1) return temp[0];
        dp[0]=temp[0];
        dp[1]=max(temp[0],temp[1]);
        for(int i=2;i<n;i++){
            int pick=temp[i]+dp[i-2];
            int notpick=dp[i-1];
            dp[i]=max(pick,notpick);
        }
        return dp[n-1];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int> temp1,temp2;
        for(int i=0;i<n;i++){
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
        }
        return max(robber(temp1),robber(temp2));
    }
};