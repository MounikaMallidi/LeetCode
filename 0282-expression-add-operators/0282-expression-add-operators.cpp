class Solution {
public:
    void expression(int idx,string expr,long val,long prev,string num,int target,vector<string>& res){
        if(idx==num.size()){
            if(val==target){
                res.push_back(expr);
            }
            return;
        }
        for(int i=idx;i<num.size();i++){
            if(i>idx && num[idx]=='0') break;
            string curstr=num.substr(idx,i-idx+1);
            long cur=stol(curstr);
            if(idx==0){
                expression(i+1,curstr,cur,cur,num,target,res);
            }
            else{
                expression(i+1,expr+'+'+curstr,val+cur,cur,num,target,res);
                expression(i+1,expr+'-'+curstr,val-cur,-cur,num,target,res);
                expression(i+1,expr+'*'+curstr,val-prev+prev*cur,prev*cur,num,target,res);
            }
        }
    }
    vector<string> addOperators(string num, int target) {
        vector<string> res;
        expression(0,"",0,0,num,target,res);
        return res;
    }
};