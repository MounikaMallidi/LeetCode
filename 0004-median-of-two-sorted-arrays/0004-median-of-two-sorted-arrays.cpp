class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int left=0;
        int right=0;
        vector<int> temp;
        while(left<=m-1 && right<=n-1){
            if(nums1[left]<=nums2[right]){
              
                temp.push_back(nums1[left]);
                  left++;
            }
            else{
                
                temp.push_back(nums2[right]);
                right++;
            }
        }
        while(left<=m-1){
            temp.push_back(nums1[left]);
            left++;
        }
        while(right<=n-1){
            temp.push_back(nums2[right]);
                right++;
        }
        int total=m+n;
        if(total%2==1){
            return temp[total/2];
        }
        return (temp[total/2-1]+temp[total/2])/2.0;
    }
};