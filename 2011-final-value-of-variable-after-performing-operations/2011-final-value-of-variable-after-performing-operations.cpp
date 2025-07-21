class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int sum=0;
        for(string s:operations){
            if(s=="--X" || s=="X--"){
                sum-=1;
            }
            else{
                sum+=1;
            }
        }
        return sum;
    }
};