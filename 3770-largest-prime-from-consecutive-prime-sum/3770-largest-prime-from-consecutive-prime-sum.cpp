class Solution {
public:
    bool isprime(long long num){
        if(num<2) return false;
        for(long long i=2;i*i<=num;i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
        
    }
    int largestPrime(int n) {
        long long sum=0;
        long long lastprimesum=0;
        for(int i=2;i<=n;i++){
            if(isprime(i)){
                sum+=i;
                if(sum>n){
                    break;
                }
                if(isprime(sum)){
                    lastprimesum=sum;
                }
            }
        }
        
        return lastprimesum;
    }
};