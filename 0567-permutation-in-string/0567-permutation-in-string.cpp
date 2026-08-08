class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq(26,0);
        vector<int> freq1(26,0);
        int size=s1.size();
        for(char ch:s1){
            freq[ch-'a']++;
        }
        int n=s2.size();
        int j=0;
        
        for(int i=0;i<n;i++){
            freq1[s2[i]-'a']++;
            bool found=true;
            if(i-j+1==size){
                for(int i=0;i<26;i++){
                    if(freq[i]!=freq1[i]){
                        freq1[s2[j]-'a']--;
                        j++;
                        found=false;
                        break;
                    }
                }
                if(found){
                    return true;
                }
            }

        }
        return false;
    }
};