class Solution {
public:
    int concatenatedBinary(int n) {
        string s="";
        int mod=1e9+7;
        for(int i=1;i<=n;i++){
            int x=i;
            int cnt=0;
            while(x){
                cnt++;
                x>>=1;
            }
            s+=bitset<32>(i).to_string().substr(32-cnt);
        }
        long long num=0;
        for(int i=0;i<s.size();i++){
            num=(num*2+(s[i]-'0'))%mod;
        }
        return num;
    }
};