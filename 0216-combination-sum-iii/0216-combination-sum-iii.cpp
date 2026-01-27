class Solution {
public:
    void checkcombination(int idx,int sum,vector<int>& arr,vector<int>& curr,vector<vector<int>>& res,int target,int k){
        int n=arr.size();
        if(sum==target && curr.size()==k){
            res.push_back(curr);
            return;
        }
        if(idx==n){
            return;
        }
        if(sum>target){
            return;
        }
        sum+=arr[idx];
        if(sum<=target){
            curr.push_back(arr[idx]);
            checkcombination(idx+1,sum,arr,curr,res,target,k);
            curr.pop_back();
        }
        sum-=arr[idx];
        checkcombination(idx+1,sum,arr,curr,res,target,k);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> arr={1,2,3,4,5,6,7,8,9};
        vector<int> curr;
        vector<vector<int>> res;
        checkcombination(0,0,arr,curr,res,n,k);
        return res;
    }
};