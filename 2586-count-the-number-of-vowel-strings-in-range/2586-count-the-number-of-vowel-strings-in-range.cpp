class Solution {
public:
    bool isvowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt=0;
        for(int i=left;i<=right;i++){
            string res=words[i];
            int n=res.size();
            if(isvowel(res[0]) && isvowel(res[n-1])){
                cnt++;
            }
        }
        return cnt;
    }
};