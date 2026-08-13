class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for(char ch:s){
            if(ch!=']'){
                st.push(ch);
            }
            else{
                string str="";
                while(!st.empty() && st.top()!='['){
                    str+=st.top();
                    st.pop();
                }
                st.pop();
                reverse(str.begin(),str.end());
                string num="";
                while(!st.empty() && isdigit(st.top())){
                    num+=st.top();
                    st.pop();
                }
                reverse(num.begin(),num.end());
                int count=stoi(num);
                string res;
                for(int i=0;i<count;i++){
                    res+=str;
                }
                for(char ch:res){
                    st.push(ch);
                }
            }
            
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};