class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> prefix_max(n);
        vector<int> suffix_max(n);
        prefix_max[0]=nums[0];
        for(int i=1;i<n;i++){
            if(i%k==0){
                prefix_max[i]=nums[i];
            }
            else{
                prefix_max[i]=max(prefix_max[i-1],nums[i]);
            }
        }
        suffix_max[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            if((i+1)%k==0){
                suffix_max[i]=nums[i];
            }
            else{
                suffix_max[i]=max(suffix_max[i+1],nums[i]);
            }
        }
        vector<int> res;
        res.push_back(prefix_max[k-1]);
        for(int i=k;i<n;i++){
            res.push_back(max(prefix_max[i],suffix_max[i-k+1]));
        }
        return res;
    }
};