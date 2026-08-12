class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<int,int>> temp;
        for(int i=0;i<n;i++){
            temp.push_back({position[i],speed[i]});
        }
        sort(temp.rbegin(),temp.rend());
        double fleet=0,previous_time=0;
        for(int i=0;i<n;i++){
            double time=(double)(target-temp[i].first)/temp[i].second;
            if(time>previous_time){
                fleet++;
                previous_time=time;
            }
        }
        return fleet;
    }
};