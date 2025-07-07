class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int temp=x,rem;
        long rev=0;
        while(x>0){
            rem=x%10;
            rev=rev*10+rem;
            x/=10;
        }
        if(temp==rev){
            return true;
        }
        return false;
    }
};