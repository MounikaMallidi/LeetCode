class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int mini = INT_MAX;
        vector<vector<int>> ans;

        
        for(int i = 1; i < n; i++){
            int diff = arr[i] - arr[i-1];
            mini = min(mini, diff);
        }

        for(int i = 1; i < n; i++){
            int diff = arr[i] - arr[i-1];
            if(diff == mini){
                ans.push_back({arr[i-1], arr[i]});
            }
        }

        return ans;
    }
};
