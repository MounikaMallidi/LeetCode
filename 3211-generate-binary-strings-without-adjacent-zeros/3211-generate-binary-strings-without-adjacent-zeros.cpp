class Solution {
public:
    void generateStrings(int n,string curr,vector<string>& s){
        if(curr.length()==n){
            s.push_back(curr);
            return;
        }
        generateStrings(n,curr+'1',s);
        if(curr.empty() || curr.back()!='0'){
            generateStrings(n,curr+'0',s);
        }
    }
    vector<string> validStrings(int n) {
        vector<string> s; 
        generateStrings(n,"",s);
        return s;
    }
};