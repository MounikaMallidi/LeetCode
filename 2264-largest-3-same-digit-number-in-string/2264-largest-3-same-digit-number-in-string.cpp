#include<bits/stdc++.h>
class Solution {
public:
    string largestGoodInteger(string num) {
        string s="";
        int cnt=1;
        int maxi=-1;
        for(int i=0;i<num.size()-1;i++){
            if(num[i]==num[i+1]){
                cnt++;
                if(cnt==3){
                    maxi=max(maxi,num[i]-'0');
                }
            }
            else{
                cnt=1;
            }
        }
        if(maxi!=-1){
            for(int i=0;i<3;i++){
                s+=(maxi+'0');
            }
        }
        return s;
    }
};