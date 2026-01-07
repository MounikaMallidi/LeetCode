class Solution {
public:
    void Subset(int idx,vector<int> nums,vector<int> curr,vector<vector<int>>& res){
        if(idx==nums.size()){
            res.push_back(curr);
            return;
        }
       curr.push_back(nums[idx]);
        Subset(idx+1,nums,curr,res);
        curr.pop_back();
        Subset(idx+1,nums,curr,res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> res;
        vector<int> curr;
        Subset(0,nums,curr,res);
        return res;
    }
};