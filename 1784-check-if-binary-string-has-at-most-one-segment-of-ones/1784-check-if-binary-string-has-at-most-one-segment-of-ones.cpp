class Solution {
public:
    bool checkOnesSegment(string s) {
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cnt++;
            }
        }
        int cnt1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cnt1++;
            }
            else{
                if(cnt1>0){
                    break;
                }
            }
        }
        if(cnt==cnt1){
            return true;
        }
        return false;
    }
};