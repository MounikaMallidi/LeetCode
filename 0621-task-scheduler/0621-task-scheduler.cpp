class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26,0);
        for(char t:tasks){
            freq[t-'A']++;
        }
        priority_queue<int> pq;
        for(int i=0;i<26;i++){
            if(freq[i]>0){
                pq.push(freq[i]);
            }
        }
        int time=0;
        while(!pq.empty()){
            vector<int> temp;
            int cycle=n+1;
            while(cycle>0 && !pq.empty()){
                int cnt=pq.top();
                pq.pop();
                if(cnt>1){
                    temp.push_back(cnt-1);
                }
                time++;
                cycle--;
            }
            for(int x:temp){
                pq.push(x);
            }
            if(!pq.empty()){
                time+=cycle;
            }
        }
        return time;
    }
};