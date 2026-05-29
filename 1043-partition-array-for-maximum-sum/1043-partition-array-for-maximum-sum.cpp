class Solution {
public:
    int f(int idx,int n,int k,vector<int> &arr,vector<int> &dp){
        if(idx==n) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int len=0;
        int maxi=INT_MIN;
        int maxAns=INT_MIN;
        for(int j=idx;j<min(n,idx+k);j++){
            len++;
            maxi=max(maxi,arr[j]);
            int sum=len*maxi+f(j+1,n,k,arr,dp);
            maxAns=max(maxAns,sum);
        }
        return dp[idx]=maxAns;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> dp(n,-1);
        return f(0,n,k,arr,dp);
    }
};