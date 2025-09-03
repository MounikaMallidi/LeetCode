class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long result=0;
        for(char ch:columnTitle){
            int val=ch-'A'+1;
            result=result*26+val;
        }
        return result;
    }
};