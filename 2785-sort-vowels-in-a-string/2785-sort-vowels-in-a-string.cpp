class Solution {
public:
    string sortVowels(string s) {
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U' or s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
                res.push_back(s[i]);
            }
        }
        sort(res.begin(),res.end());
        for(int i=0;i<s.size();i++){
            if(s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U' or s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
                s[i]=res[0];
                res.erase(0,1);
            }
        }
        return s;
    }
};