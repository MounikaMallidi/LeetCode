class Solution {
public:
    int countPrimes(int n) {
        if(n<=1) return 0;
        int cnt=0;
        for(int i=2;i<n;i++){
            int found=true;
            for(int j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    found=false;
                    break;
                }
            }
            if(found){
                cnt++;
            }
        }
        return cnt;
    }
};