class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int left=0,right=0;
        int mini=INT_MAX;
        int windowsize=n-k;
        int sum=0,sumtotal=0;
        while(right<n){
            sumtotal+=cardPoints[right];
            sum+=cardPoints[right];
            if(right-left+1==windowsize){
                mini=min(mini,sum);
                sum-=cardPoints[left];
                left++;
            }
            right++;
        }
        if(windowsize==0) return sumtotal;
        return sumtotal-mini;
    }
};