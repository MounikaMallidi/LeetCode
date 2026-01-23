class Solution {
public:
    void checkcombination(int idx,int sum,vector<int>& candidates,vector<int>& curr,int target,vector<vector<int>>& res){
        int n=candidates.size();
        if(idx==n){
            return;
        }
        if(sum==target){
            res.push_back(curr);
            return;
        }
        if(sum>target){
            return;
        }
        sum+=candidates[idx];
        if(sum<=target){
            curr.push_back(candidates[idx]);
            checkcombination(idx,sum,candidates,curr,target,res);
            curr.pop_back();
        }
        sum-=candidates[idx];
        checkcombination(idx+1,sum,candidates,curr,target,res);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        checkcombination(0,0,candidates,curr,target,res);
        return res;
    }
};