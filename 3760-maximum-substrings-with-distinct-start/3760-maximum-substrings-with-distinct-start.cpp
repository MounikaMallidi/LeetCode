class Solution {
public:
    int maxDistinct(string s) {
        map<char,int> mpp;
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(mpp.find(s[i])==mpp.end()){
                mpp[s[i]]++;
                cnt++;
            }
        }
        return cnt;
    }
};