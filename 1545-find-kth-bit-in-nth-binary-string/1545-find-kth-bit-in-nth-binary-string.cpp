class Solution {
public:
    char findKthBit(int n, int k) {
        vector<string> res(n);
        if(n==1){
            return '0';
        }
        res[0]="0";
        for(int i=1;i<n;i++){
            string s=res[i-1];
            for(int i=0;i<s.size();i++){
                if(s[i]=='0'){
                    s[i]='1';
                }
                else{
                    s[i]='0';
                }
            }
            reverse(s.begin(),s.end());
            res[i]=res[i-1]+"1"+s;
        }
        return res[n-1][k-1];
    }
};