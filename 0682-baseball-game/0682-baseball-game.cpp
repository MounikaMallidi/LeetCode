class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(string str:operations){
            if(str=="+"){
                int first=st.top();
                st.pop();
                int second=st.top();
                st.push(first);
                st.push(first+second);
            }
            else if(str=="D"){
                st.push(st.top()*2);
            }
            else if(str=="C"){
                st.pop();
            }
            else{
                st.push(stoi(str));
            }
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};