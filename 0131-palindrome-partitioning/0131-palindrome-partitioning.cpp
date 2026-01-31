class Solution {
public:
    void ispalindrome(int idx,string& s,vector<string>& curr,vector<vector<string>>& res){
        if(idx==s.size()){
            res.push_back(curr);
            return ;
        }
        for(int i=idx;i<s.size();i++){
            bool ispal=true;
            int left=idx,right=i;
            while(left<=right){
                if(s[left]!=s[right]){
                    ispal=false;
                    break;
                }
                left++;
                right--;
            }
            if(ispal){
                curr.push_back(s.substr(idx,i-idx+1));
                ispalindrome(i+1,s,curr,res);
                curr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> curr;
        vector<vector<string>> res;
        ispalindrome(0,s,curr,res);
        return res;
    }
};