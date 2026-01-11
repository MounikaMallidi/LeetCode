class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int x=s.size();
        vector<int> res;
        for(int i=0;i<x;i++){
            int row=startPos[0],col=startPos[1];
            int j=0,cnt=0;
            for(j=i;j<x;j++){
                if(s[j]=='L'&& col>0){
                    col--;
                }
                else if(s[j]=='R' && col+1<n){
                    col++;
                }
                else if(s[j]=='U' && row>0){
                    row--;
                }
                else if(s[j]=='D' && row+1<n){
                    row++;
                }
                else{
                    break;
                }
            }
            res.push_back(j-i);
        }
        return res;
    }
};