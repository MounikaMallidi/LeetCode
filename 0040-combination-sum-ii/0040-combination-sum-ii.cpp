class Solution {
public:
    void checkcombination(int start,int sum,vector<int>& candidates,vector<int>& curr,int target,vector<vector<int>>& res){
        int n=candidates.size();
        if(sum==target){
            res.push_back(curr);
            return;
        }
        for (int i = start; i < n; i++) {
            if (i > start && candidates[i] == candidates[i - 1]) continue;
            if (sum + candidates[i] > target) break;
            curr.push_back(candidates[i]);
            checkcombination(i + 1, sum + candidates[i],
                             candidates, curr, target, res);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int>curr;
        sort(candidates.begin(),candidates.end());
        checkcombination(0,0,candidates,curr,target,res);
        return res;
    }
};