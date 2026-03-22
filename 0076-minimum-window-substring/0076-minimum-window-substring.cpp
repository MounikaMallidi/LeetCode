class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> mp;
        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }
        int left=0,right=0,cnt=0,mini=INT_MAX,sindex=-1;
        while(right<s.size()){
            if(mp[s[right]]>0){
                cnt++;
            }
            mp[s[right]]--;
            while(cnt==t.size()){
                if(right-left+1<mini){
                    mini=right-left+1;
                    sindex=left;
                }
                mp[s[left]]++;
                if(mp[s[left]]>0){
                    cnt--;
                }
                left++;
            }
            right++;
        }
        return (mini==INT_MAX)?"":s.substr(sindex,mini);
    }
};