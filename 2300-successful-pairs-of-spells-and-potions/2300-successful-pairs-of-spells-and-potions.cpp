class Solution {
public:
    int binary_search(vector<int> &potions,int num,long long success){
        int low=0;
        int mid;
        int high=potions.size()-1;
        int cnt=0;
        while(low<=high){
            mid=(low+high)/2;
            long long mul=(long long)num*potions[mid];
            if(mul>=success){
                cnt+=high-mid+1;
                high=mid-1;
                
            }
            else{
                low=mid+1;
            }
        }
        return cnt;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> res;
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++){
            int num=spells[i];
            int num_cnt=binary_search(potions,num,success);
            res.push_back(num_cnt);
        }
        return res;
    }
};