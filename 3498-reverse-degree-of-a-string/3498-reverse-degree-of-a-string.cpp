class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            int res=26-(s[i]-'a');
            int mul=res*(i+1);
            sum+=mul;
        }
        return sum;
    }
};