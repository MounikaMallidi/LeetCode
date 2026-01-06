class Solution {
public:
    void parenthesis(int n,string curr,vector<string>& s,int opencount,int closecount){
        if(curr.length()==2*n){
            s.push_back(curr);
            return;
        }
        if(opencount<n){
            parenthesis(n,curr+"(",s,opencount+1,closecount);
        }
        if(closecount<opencount){
            parenthesis(n,curr+')',s,opencount,closecount+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> s;
        parenthesis(n,"",s,0,0);
        return s;
    }
};