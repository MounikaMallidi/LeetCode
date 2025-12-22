class Solution {
public:
    bool shipweight(vector<int>& weights,int wgt,int days){
        int sum=0,cnt=1;
        for(int i=0;i<weights.size();i++){
            if(sum+weights[i]<=wgt){
                sum+=weights[i];
            }
            else{
                sum=weights[i];
                cnt++;
            }
        }
        return cnt<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(shipweight(weights,mid,days)){
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