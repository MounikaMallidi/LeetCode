class Solution {
public:
    string tobase(int num,int base){
        string digits="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string result="";
        while(num>0){
            result+=digits[num%base];
            num/=base;
        }
        reverse(result.begin(),result.end());
        return result;
    }
    string concatHex36(int n) {
        int square=n*n;
        int cube=n*n*n;
        string hex=tobase(square,16);
        string hextri=tobase(cube,36);
        return hex+hextri;
    }
};