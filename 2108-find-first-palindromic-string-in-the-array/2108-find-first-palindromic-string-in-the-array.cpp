class Solution {
public:
    string firstPalindrome(vector<string>& words) {
         for(int i=0;i<words.size();i++){
            string palin=words[i];
            int left=0;
            int right=palin.size()-1;
            bool found=true;
            while(left<=right){
                if(palin[left]!=palin[right]){
                    found=false;
                    break;
                }
                left++;
                right--;
            }
            if(found){
                return words[i];
            }
        }
        return "";
    }
};