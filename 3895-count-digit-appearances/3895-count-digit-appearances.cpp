class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int x=nums[i];
            while(x>0){
                int rem=x%10;
                if(rem==digit){
                    cnt++;
                }
                x/=10;
            }
        }
        return cnt;
    }
};