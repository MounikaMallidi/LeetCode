class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        vector<int> total;
        int sum=0;
        for(int i=1;i<nums.size();i++){
            sum+=nums[i-1];
            left[i]=sum;
        }
        int sum1=0;
        for(int i=nums.size()-1;i>0;i--){
            sum1+=nums[i];
            right[i-1]=sum1;
        }
        for(int i=0;i<n;i++){
            total.push_back(abs(left[i]-right[i]));
        }
        return total;
    }
};