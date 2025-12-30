class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string res="";
        int cnt=0;
        while(res.find(b)==string::npos){
            if(res.size()>a.size()+b.size()) return -1;
            cnt++;
            res+=a;
        }
        return cnt;
    }
};