class Solution {
public:
    int maxSum(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        if(maxi<0){
            return maxi;
        }
        int sum=0;
        set<int> num(nums.begin(),nums.end());
        for (auto it = num.begin(); it != num.end(); ) {
            if (*it < 0) {
                it = num.erase(it);
            } else {
                sum += *it;
                ++it;
            }
        }
        return sum;
    }
};