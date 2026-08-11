class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string str:tokens){
            if(str!="+" && str!="-" && str!="*" && str!="/"){
                st.push(stoi(str));
            }
            else{
                int second=st.top();
                st.pop();
                int first=st.top();
                st.pop();
                int ans=0;
                if(str=="+"){
                    ans=first+second;
                    st.push(ans);
                }
                else if(str=="-"){
                    ans=first-second;
                    st.push(ans);
                }
                else if(str=="*"){
                    ans=first*second;
                    st.push(ans);
                }
                else{
                    ans=first/second;
                    st.push(ans);
                }
            }
        }
        return st.top();
    }
};