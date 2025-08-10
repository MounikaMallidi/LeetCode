class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        vector<int> idx;
        for(int i=0;i<nums.size();i++){
            if(i%10==nums[i]){
                idx.push_back(i);
            }
        }
        if(idx.size()==0){
            return -1;
        }
        return idx[0];
    }
};