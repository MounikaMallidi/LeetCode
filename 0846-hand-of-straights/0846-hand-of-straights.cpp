class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0) return false;
        map<int,int> mp;
        for(int i=0;i<hand.size();i++){
            mp[hand[i]]++;
        }
        for(auto it:mp){
            int start=it.first;
            int count=it.second;
            if(count>0){
                for(int i=0;i<groupSize;i++){
                    if(mp[start+i]<count){
                        return false;
                    }
                    mp[start+i]-=count;
                }
            }
        }
        return true;
    }
};