class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int> res;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                if(i==j) continue;
                if(boxes[j]=='1'){
                    sum+=(abs(j-i));
                }
            }
            res.push_back(sum);
        }
        return res;
    }
};