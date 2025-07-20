class Solution {
public:
    string processStr(string s) {
        string str="";
        for(char ch:s){
            if(ch=='*'){
                if(!str.empty()){
                    str.erase(str.end()-1);
                }
            }
            else if(ch=='#'){
                str+=str;
            }
            else if(ch=='%'){
                reverse(str.begin(),str.end());
            }
            else{
                str+=ch;
            }
        }
        return str;
    }
};