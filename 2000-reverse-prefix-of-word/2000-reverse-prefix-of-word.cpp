class Solution {
public:
    string reversePrefix(string word, char ch) {
        auto it=find(word.begin(),word.end(),ch);
        if(it!=word.end()){
            reverse(word.begin(),it+1);
            return word;
        }
        return word;
    }
};