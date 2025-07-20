class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int> vowels;
        map<char,int> consonents;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                vowels[s[i]]++;
            }
            else{
                consonents[s[i]]++;
            }
        }
        int vowel_maxi=0;
        int consonents_maxi=0;
        for(auto it:vowels){
            if(it.second>vowel_maxi){
                vowel_maxi=it.second;
            }
        }
        for(auto it:consonents){
            if(it.second>consonents_maxi){
                consonents_maxi=it.second;
            }
        }
        return vowel_maxi+consonents_maxi;
    }
};