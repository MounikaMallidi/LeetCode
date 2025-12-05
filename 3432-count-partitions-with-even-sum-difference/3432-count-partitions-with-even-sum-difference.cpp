class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int sum1=0;
        int c=0;
        for(int i=0;i<n-1;i++){
            sum1+=nums[i];
            if( (sum1-(sum-sum1))%2==0){
                c++;
            }
        }
        return c;
    }
};