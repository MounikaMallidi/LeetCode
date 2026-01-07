class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        const int MOD = 1e9 + 7;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> power(n);
        power[0]=1;
        for(int i=1;i<n;i++){
            power[i]=(power[i-1]*2)%MOD;
        }
        long long left=0;
        long long right=nums.size()-1;
        long long cnt=0;
        while(left<=right){
            if(nums[left]+nums[right]<=(long long)target){
                cnt=(cnt+power[right-left])%MOD;
                left++;
            }
            else{
                right--;
            }
        }
        return (int)cnt;
    }
};