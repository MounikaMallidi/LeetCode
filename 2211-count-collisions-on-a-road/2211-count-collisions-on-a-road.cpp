class Solution {
public:
    int countCollisions(string directions) {
        int n=directions.size();
        int res1 = n, res2 = -1;
        for(int i=0;i<n;i++){
            if(directions[i]!='L'){
                res1=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(directions[i]!='R'){
                res2=i;
                break;
            }
        }
        if (res1 > res2) return 0;
        int c=0;
        for(int j=res1;j<=res2;j++){
            if(directions[j]!='S'){
                c++;
            }
        }
        return c;
    }
};