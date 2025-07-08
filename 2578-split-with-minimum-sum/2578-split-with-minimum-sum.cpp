class Solution {
public:
    int splitNum(int num) {
        vector<int> temp;
        string nums=to_string(num);
        sort(nums.begin(),nums.end());
        string str="";
        string str1="";
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                str+=nums[i];
            }
            else{
                str1+=nums[i];
            }
        }
        int res=stoi(str)+stoi(str1);
        return res;
    }
};