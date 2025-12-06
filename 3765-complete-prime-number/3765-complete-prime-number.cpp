class Solution {
public:
    bool isprime(long long num){
        if(num<=1) return false;
        for(long long i=2;i*i<=num;i++){
            if(num%i==0) return false;
        }
        return true;
    }
    bool completePrime(int num) {
        string s=to_string(num);
        int len=s.size();
        long long prefix=0;
        for(int i=0;i<len;i++){
            prefix=stoll(s.substr(0,i+1));
            if(!isprime(prefix)){
                return false;
            }
        }
        long long suffix=0;
        for(int i=0;i<len;i++){
            suffix=stoll(s.substr(i));
            if(!isprime(suffix)){
                return false;
            }
        }
        return true;
        
    }
};