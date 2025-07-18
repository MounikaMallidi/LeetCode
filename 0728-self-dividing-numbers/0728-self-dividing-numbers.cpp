class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        while(left<=right){
            int temp=left;
            bool found=true;
            while(temp>0){
                int rem=temp%10;
                if(rem==0 || left%rem!=0){
                    found=false;
                    break;
                }
                temp/=10;
            }
            if(found){
                res.push_back(left);
            }
            left++;
        }
        return res;
    }
};