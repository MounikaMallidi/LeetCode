class Solution {
public:
    vector<int> NSE(vector<int>& heights){
        int n=heights.size();
        stack<int> st;
        vector<int> res(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            res[i]=(st.empty()?n:st.top());
            st.push(i);
        }
        return res;
    }
    vector<int> PSE(vector<int>& heights){
        int n=heights.size();
        stack<int> st;
        vector<int> res(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            res[i]=(st.empty()?-1:st.top());
            st.push(i);     
        }
        return res;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int> nse=NSE(heights);
        vector<int> pse=PSE(heights);
        int maxi=0;
        for(int i=0;i<heights.size();i++){
            maxi=max(maxi,(nse[i]-pse[i]-1)*heights[i]);
        }
        return maxi;
    }
};