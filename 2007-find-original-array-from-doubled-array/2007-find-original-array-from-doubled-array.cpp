class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n=changed.size();
        sort(changed.begin(),changed.end());
        vector<int> res;
        int i=0;
        while(i<n){
            int num=changed[i]*2;
            auto it=find(changed.begin()+i+1,changed.end(),num);
            if(it!=changed.end() && it!=changed.begin()+i){
                res.push_back(changed[i]);
                changed.erase(it);
                changed.erase(changed.begin()+i);
            }
            else{
                return {};
            }
            n=changed.size();
        }
        return res;
    }
};