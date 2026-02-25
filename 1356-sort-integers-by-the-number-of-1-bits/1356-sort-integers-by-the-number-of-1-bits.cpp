class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        map<int,vector<int>> mp;
        vector<int> res;
        for(int i=0;i<arr.size();i++){
            int n=arr[i];
            int cnt=0;
            while(n>0){
                if(n&1){
                    cnt++;
                }
                n=n>>1;
            }
            mp[cnt].push_back(arr[i]);
        }
        for(auto it:mp){
           for(int x:it.second){
            res.push_back(x);
           }
        }
        return res;
    }
};