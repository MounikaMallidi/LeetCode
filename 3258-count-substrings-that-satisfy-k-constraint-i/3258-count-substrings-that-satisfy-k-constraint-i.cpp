class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int cnt0=0,cnt1=0;
            for(int j=i;j<n;j++){
                if(s[j]=='0'){
                    cnt0++;
                }
                if(s[j]=='1'){
                    cnt1++;
                }
                if(cnt0<=k || cnt1<=k){
                    cnt++;
                }
                
            }
        }
        return cnt;
    }
};