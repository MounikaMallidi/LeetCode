class Solution:
    def longestPalindrome(self, s: str) -> str:
        if len(s)==0 or len(s)==1:
            return s
        st=""
        m=0
        n=""
        for i in range(len(s)):
            for j in range(i+1,len(s)):
                st=s[i:j+1]
                if st==st[::-1]:
                    if m<len(st):
                        m=len(st)
                        n=st
        if m==0:
            return s[0]
        return n




                





            
        
