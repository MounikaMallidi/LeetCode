class Solution {
public:
    bool checkorder(vector<int>& nums){
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                return true;
            }
        }
        return false;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                break;
            }
            if(i==n-2){
                return 0;
            }
        }
        int cnt=0;
        while(checkorder(nums)){
            int mini=INT_MAX;
            int left=0,right=0,sum=0;
            int n=nums.size();
            for(int i=0;i<n-1;i++){
                sum=nums[i]+nums[i+1];
                if(sum<mini){
                    mini=sum;
                    left=i;
                    right=i+1;
                }
            }
            nums[left]=sum;
            nums.erase(nums.begin()+right);
            cnt++;
        }
        return cnt;
    }
};