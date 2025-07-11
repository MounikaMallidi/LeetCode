class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
         map<char, string> mpp{
            {'a', ".-"}, {'b', "-..."}, {'c', "-.-."}, {'d', "-.."},
            {'e', "."}, {'f', "..-."}, {'g', "--."}, {'h', "...."},
            {'i', ".."}, {'j', ".---"}, {'k', "-.-"}, {'l', ".-.."},
            {'m', "--"}, {'n', "-."}, {'o', "---"}, {'p', ".--."},
            {'q', "--.-"}, {'r', ".-."}, {'s', "..."}, {'t', "-"},
            {'u', "..-"}, {'v', "...-"}, {'w', ".--"}, {'x', "-..-"},
            {'y', "-.--"}, {'z', "--.."}
        };
        set<string> res;
        for(string str:words){
            string s="";
            for(int i=0;i<str.size();i++){
                s+=mpp[str[i]];
            }
            res.insert(s);
        }
        return res.size();
    }
};