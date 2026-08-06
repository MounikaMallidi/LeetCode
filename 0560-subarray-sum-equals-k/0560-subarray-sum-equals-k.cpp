class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int> presum;
        presum[0]=1;
        int sum=0,c=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int rem=sum-k;
            c+=presum[rem];
            presum[sum]++;

        }
        return c;
    }
};