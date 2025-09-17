class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> res;
        int low=0;
        int high=s.size();
        for(char ch:s){
            if(ch=='I'){
                res.push_back(low);
                low++;
            }
            else{
                res.push_back(high);
                high--;
            }
        }
        res.push_back(low);
        return res;
    }
};