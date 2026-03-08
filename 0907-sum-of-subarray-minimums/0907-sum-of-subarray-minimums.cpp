class Solution {
public:
    vector<int> NSE(vector<int>& arr){
        int n=arr.size();
        vector<int> res(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            res[i]=(st.empty()?n:st.top());
            st.push(i);
        }
        return res;
    }
    vector<int> PSE(vector<int>& arr){
        int n=arr.size();
        vector<int> res(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            res[i]=(st.empty()?-1:st.top());
            st.push(i);
        }
        return res;
    }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> nse=NSE(arr);
        vector<int> pse=PSE(arr);
        int mod=1e9+7;
        int sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            long long left=i-pse[i];
            long long right=nse[i]-i;
            sum=(sum+left*right*arr[i])%mod;
        }
        return sum;
    }
};