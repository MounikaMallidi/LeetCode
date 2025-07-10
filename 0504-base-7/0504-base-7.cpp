class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
        int temp=num;
        num=abs(num);
        string result="";
        while(num!=0){
            int rem=num%7;
            result=to_string(rem)+result;
            num/=7;
        }
        if(temp<0){
            result="-"+result;
        }
        return result;
    }
};