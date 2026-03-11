class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0;
        unordered_map<char,int> mp;
        int maxlen=0;
        while(right<s.size()){
            if(mp[s[right]]>0){
                while(mp[s[right]]>0){
                    mp[s[left]]--;
                    left++;
                }
            }
            mp[s[right]]++;
            maxlen=max(maxlen,right-left+1);
            right++;
        }
        return maxlen;
    }
};