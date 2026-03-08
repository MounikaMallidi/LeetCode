class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        int ans=pow(2,n);
        for(int i=0;i<ans;i++){
            int x=i;
            string s="";
            while(x>0){
                s+=(x&1)+'0';
                x>>=1;
            }
            reverse(s.begin(),s.end());
             while(s.size() < n){
                s = "0" + s;
             }
            auto it=find(nums.begin(),nums.end(),s);
            if(it==nums.end()){
                return s;
            }
        }
        return  "";
    }
};