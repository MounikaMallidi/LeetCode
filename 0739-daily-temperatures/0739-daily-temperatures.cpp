class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st;
        int n=temperatures.size();
        st.push({temperatures[0],0});
        vector<int> res(n);
        for(int i=1;i<n;i++){
            while(!st.empty() && temperatures[i]>st.top().first){
                res[st.top().second]=i-st.top().second;
                st.pop();
            }
            st.push({temperatures[i],i});
        } 
        return res;
    }
};