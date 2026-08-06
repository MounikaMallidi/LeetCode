class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0,right=n-1;
        int area=0;
        while(left<=right){
            int width=right-left;
            int length=min(height[left],height[right]);
            area=max(area,width*length);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return area;
    }
};