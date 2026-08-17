/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int low=0;
        int high=mountainArr.length()-1;
        while(low<high){
            int mid=low+(high-low)/2;
            if(mountainArr.get(mid)<mountainArr.get(mid+1)){
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        int peak=low;
        if(target == mountainArr.get(peak)){
            return peak;
        }
        low=0,high=peak;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(target==mountainArr.get(mid)){
                return mid;
            }
            else if(target<mountainArr.get(mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        low=peak,high=mountainArr.length()-1;;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(target==mountainArr.get(mid)){
                return mid;
            }
            else if(target>mountainArr.get(mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
    }
};