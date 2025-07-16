class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int left=0;
        int right=0;
        int n=word1.size();
        int m=word2.size();
        string str;
        while(left<=n && right<=m){
            if(left==n || right==m){
                break;
            }
            str+=word1[left];
            left++;
            str+=word2[right];
            right++;

        }
        while(left<n){
            str+=word1[left];
            left++;
        }
        while(right<m){
            str+=word2[right];
            right++;
        }
        return str;
    }
};