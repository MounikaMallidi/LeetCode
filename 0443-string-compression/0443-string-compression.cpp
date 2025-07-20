class Solution {
public:
    int compress(vector<char>& chars) {
        string str="";
        int left=0;
        int n=chars.size();
        while(left<n){
            char current=chars[left];
            int cnt=0;
            while(left<n && chars[left]==current){
                cnt++;
                left++;
            }
            str+=current;
           if(cnt>1){
            str+=to_string(cnt);
           }
        }
        chars.clear();
        for(char ch:str){
            chars.push_back(ch);
        }
        return chars.size();
    }
};