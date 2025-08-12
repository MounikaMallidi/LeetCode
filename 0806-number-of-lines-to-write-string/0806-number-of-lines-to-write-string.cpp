class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int sum=0;
        int cnt=1;
        vector<int> result;
        for(int i=0;i<s.size();i++){
            int w=widths[s[i]-'a'];
            if(sum+w>100){
                cnt++;
                sum=w;
            }
            else{
                sum+=w;
            }
        }
        result.push_back(cnt);  
        result.push_back(sum); 

        return result;
    }
};