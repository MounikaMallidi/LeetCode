class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        for(int i=1;i<=maxi;i++){
            if(st.find(i)==st.end()){
                return i;
            }
        }
        if(maxi<0) return 1;
        return maxi+1;
    }
};