class Solution {
public:
    void subset(int idx,vector<int>& nums,vector<int>& curr,vector<vector<int>>& res){
        if(idx==nums.size()){
            res.push_back(curr);
            return;
        }
        curr.push_back(nums[idx]);
        subset(idx+1,nums,curr,res);
        if(idx+1<nums.size() && nums[idx]==nums[idx+1]){
            idx++;
        }
        curr.pop_back();
        subset(idx+1,nums,curr,res);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> curr;
        vector<vector<int>> res;
        subset(0,nums,curr,res);
        
        return res;
    }
};