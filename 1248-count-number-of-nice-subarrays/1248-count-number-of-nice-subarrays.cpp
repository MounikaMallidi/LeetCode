class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int cnt=0,sum=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i]%2;
            if(mp.find(sum-k)!=mp.end()){
                cnt+=mp[sum-k];
            }
            mp[sum]++;
        }
        return cnt;
    }
};