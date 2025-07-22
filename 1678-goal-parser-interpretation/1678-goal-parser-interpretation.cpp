class Solution {
public:
    string interpret(string command) {
        string str;
        for(int i=0;i<command.size();i++){
            if(command[i]=='G'){
                str+=command[i];
            }
            else if(command[i]=='(' && command[i+1]==')'){
                str+='o';
            }
            else if(command[i]=='(' && command[i+1]=='a'){
                str+='a';
                str+='l';
            }
        }
        return str;
    }
};