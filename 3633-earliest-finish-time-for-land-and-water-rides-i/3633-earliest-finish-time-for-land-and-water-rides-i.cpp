class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int mintime=INT_MAX;
        for(int i=0;i<landStartTime.size();i++){
            for(int j=0;j<waterStartTime.size();j++){
                int landride=landStartTime[i]+landDuration[i];
                int landmax=max(landride,waterStartTime[j]);
                int totallandride=landmax+waterDuration[j];

                int waterride=waterStartTime[j]+waterDuration[j];
                int watermax=max(waterride,landStartTime[i]);
                int totalwaterride=watermax+landDuration[i];

                int ridesmintime=min(totallandride,totalwaterride);
                mintime=min(mintime,ridesmintime);
            }
           
        }
        return mintime;
    }
};