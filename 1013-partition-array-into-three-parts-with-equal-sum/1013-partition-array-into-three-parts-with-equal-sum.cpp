class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n=arr.size();
        int total=0;
        for(int i=0;i<n;i++){
            total+=arr[i];
        }
        int target=total/3;
        int sum=0,count=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==target){
                sum=0;
                count++;
            }
        }
        return count>=3;
    }
};