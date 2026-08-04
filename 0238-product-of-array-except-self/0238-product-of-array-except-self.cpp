class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        long long pro=1;
        int zero_cnt=0;
        int zero_idx=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zero_cnt++;
                zero_idx=i;
            }
            else{
                pro*=nums[i];
            }
        }
        vector<int> res(n,0);
        if(zero_cnt>1){
            return res;
        }
        else if(zero_cnt==1){
            res[zero_idx]=pro;
            return res;
        }
        for(int i=0;i<n;i++){
            int ans=pro/nums[i];
            res[i]=ans;
        }
        return res;
    }
};