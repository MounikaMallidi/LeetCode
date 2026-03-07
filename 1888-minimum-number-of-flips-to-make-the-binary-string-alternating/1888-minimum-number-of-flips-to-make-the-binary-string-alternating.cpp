class Solution {
public:
    int minFlips(string s) {
        int n=s.size();
        s=s+s;
        string alt1="";
        string alt2="";
        for(int i=0;i<s.size();i++){
            if(i%2==0){
                alt1+='0';
                alt2+='1';
            }
            else{
                alt1+='1';
                alt2+='0';
            }
        }
        int diff1=0;
        int diff2=0;
        int ans=INT_MAX;
        for(int i=0;i<s.size();i++){
            if(s[i]!=alt1[i]) diff1++;
            if(s[i]!=alt2[i]) diff2++;
            if(i>=n){
                if(s[i-n]!=alt1[i-n]) diff1--;
                if(s[i-n]!=alt2[i-n]) diff2--;
            }
            if(i>=n-1){
                ans=min(ans,min(diff1,diff2));
            }
        }
        return ans;
    }
};