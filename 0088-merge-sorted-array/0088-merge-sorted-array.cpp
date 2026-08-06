class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int cnt=m;
        for(int i=0;i<n;i++){
            nums1[cnt]=nums2[i];
            cnt++;
        }
        sort(nums1.begin(),nums1.end());
        
    }
};