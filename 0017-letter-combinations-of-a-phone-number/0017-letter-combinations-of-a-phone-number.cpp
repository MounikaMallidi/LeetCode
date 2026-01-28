class Solution {
public:
    void checkcombination(int idx,int n,string s,vector<string>& res,string digits){
        map<int,string> mpp={
            {2,"abc"},
            {3,"def"},
            {4,"ghi"},
            {5,"jkl"},
            {6,"mno"},
            {7,"pqrs"},
            {8,"tuv"},
            {9,"wxyz"}
        };
        if(idx==n){
            res.push_back(s);
            return;
        }
        int digit=digits[idx]-'0';
        string letters=mpp[digit];
        for(int i=0;i<letters.size();i++){
            s+=letters[i];
            checkcombination(idx+1,n,s,res,digits);
            s.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
        int n=digits.size();
        if(n==0){
            return {};
        }
        string s="";
        vector<string> res;
        checkcombination(0,n,s,res,digits);
        return res; 
    }
};