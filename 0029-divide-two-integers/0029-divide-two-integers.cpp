class Solution {
public:
    int divide(int dividend, int divisor) {
       if(dividend==INT_MIN && divisor==-1){
        return INT_MAX;
       }
       long long a = llabs((long long)dividend);
        long long b = llabs((long long)divisor);
       long long result=0;
       while(a>=b){
        long long temp=b;
        long long multiple=1;
        while(a>=(temp<<1)){
            temp<<=1;
            multiple<<=1;
        }
        a-=temp;
        result+=multiple;
       }
       int sign=1;
       if(divisor<0) sign=-sign;
       if(dividend<0) sign=-sign;
       result=result*sign;
       return (int)result;
    }
};