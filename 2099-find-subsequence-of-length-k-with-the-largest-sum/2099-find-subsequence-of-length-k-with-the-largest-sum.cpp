class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n=nums.size();
        vector<pair<int,int>> temp;
        for(int i=0;i<n;i++){
            temp.push_back({nums[i],i});
        }
        sort(temp.begin(),temp.end(),greater<>());
        temp.resize(k);
        sort(temp.begin(),temp.end(),[](auto &a,auto &b){
            return a.second<b.second;
        });
        vector<int> res;
        for(auto it:temp){
            res.push_back(it.first);
        }
        return res;
    }
};