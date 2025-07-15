class Solution {
public:
    bool isValid(string word) {
        string vowel="AEIOUaeiou";
        string consonent="bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
        if(word.size()<=2){
            return false;
        }
        bool found=false;
        bool founding=false;
        for(char ch:word){
            if(!isalnum(ch)){
                return false;
            }
            if(vowel.find(ch)!=string::npos){
                found=true;
            }
            if(consonent.find(ch)!=string::npos){
                founding=true;
            }
        }
        return found && founding;
    }
};