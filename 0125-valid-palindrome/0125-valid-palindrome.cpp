class Solution {
public:
    bool PalindromeChecker(int left,int right,string &s){
        if(left>=right) return true;
        if(!isalnum(s[left])) return PalindromeChecker(left+1,right,s);
        if(!isalnum(s[right])) return PalindromeChecker(left,right-1,s);
        if(tolower(s[left])!=tolower(s[right])) return false;
        return PalindromeChecker(left+1,right-1,s);
    }
    bool isPalindrome(string s) {
        return PalindromeChecker(0,s.size()-1,s);
    }
};