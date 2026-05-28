class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,1);
	    vector<int> hash(n,0);
        sort(nums.begin(),nums.end());
        int maxi=1,lastindex=0;
        for(int idx=0;idx<n;idx++){
	        hash[idx]=idx;
            for(int prev=0;prev<=idx-1;prev++){
                if(nums[idx]%nums[prev]==0 && 1+dp[prev]>dp[idx]){
                    dp[idx]=1+dp[prev];
		            hash[idx]=prev;
                }
            }
            if(dp[idx]>maxi){
		        maxi=dp[idx];
		        lastindex=idx;
	        }
		
        }
    	vector<int> temp;
    	temp.push_back(nums[lastindex]);
    	while(hash[lastindex]!=lastindex){
    		lastindex=hash[lastindex];
    		temp.push_back(nums[lastindex]);
    	}
    	reverse(temp.begin(),temp.end());
    	return temp;
    }
};