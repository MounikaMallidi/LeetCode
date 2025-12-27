class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        for(int i=0;i<nums.size();i++){
            int n=arr1.size();
            int m=arr2.size();
            if(arr1.empty()){
                arr1.push_back(nums[i]);
            }
            else if(arr2.empty()){
                arr2.push_back(nums[i]);
            }
            else if(arr1[n-1]>arr2[m-1]){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }
        }
        arr1.insert(arr1.end(),arr2.begin(),arr2.end());
        return arr1;
    }
};