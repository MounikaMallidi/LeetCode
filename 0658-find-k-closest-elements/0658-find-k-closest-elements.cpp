class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        int left=0,right=arr.size()-1;
        if(arr.size()==k){
            return arr;
        }
        while(left<=right){
            if(right-left+1==k){
                vector<int> res(arr.begin()+left,arr.begin()+right+1);
                return res;
            }
            int a=arr[left];
            int b=arr[right];
            if(abs(a-x)<=abs(b-x)){
                right--;
            }
            else{
                left++;
            }
        }
        return {};
    }
};