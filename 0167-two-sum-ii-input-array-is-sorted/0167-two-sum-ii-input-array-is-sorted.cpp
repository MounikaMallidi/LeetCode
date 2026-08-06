class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> mpp;
        int n=numbers.size();
        for(int i=0;i<n;i++){
            int num=target-numbers[i];
            if(mpp.find(num)!=mpp.end()){
                return {mpp[num]+1,i+1};
            }
            mpp[numbers[i]]=i;
        }
        return {-1,-1};
    }
};