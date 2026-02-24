class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++){
            int base=i;
            int temp=n;
            int binary[32];
            int j=0;
            while(temp>0){
                binary[j]=temp%base;
                j++;
                temp/=base;
            }
            int left=0,right=j;
            while(left<=right){
                if(binary[left]!=binary[right]){
                    return false;
                }
            }
        }
        return true;
    }
};