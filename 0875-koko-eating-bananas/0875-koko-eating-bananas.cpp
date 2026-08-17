class Solution {
public:
    long long time(vector<int>& piles, int h){
        long long total=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            total+=(piles[i] + h - 1) / h;
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            long long hours=time(piles,mid);
            if(hours<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};