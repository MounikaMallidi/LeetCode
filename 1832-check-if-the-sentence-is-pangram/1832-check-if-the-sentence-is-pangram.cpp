class Solution {
public:
    bool checkIfPangram(string sentence) {
        int f[26]={};
        for(int i=0;i<sentence.size();i++){
            f[sentence[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(f[i]==0){
                return false;
            }
        }
        return true;
    }
};