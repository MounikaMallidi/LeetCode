class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mpp;
        string res="";
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto it:mpp){
            pq.push({it.second,it.first});
        }
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            res.append(it.first,it.second);
        }
        return res;
    }
};