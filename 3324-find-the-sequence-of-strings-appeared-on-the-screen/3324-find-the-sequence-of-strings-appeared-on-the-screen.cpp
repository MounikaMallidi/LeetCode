class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string> temp;
        string res="";
        int n=target.size();
        for(int i=0;i<n;i++){
            res+="a";
            while(res[i]!=target[i]){
                temp.push_back(res);
                res[i]=res[i]+1;
            }
            temp.push_back(res);
        }
        return temp;
    }
};