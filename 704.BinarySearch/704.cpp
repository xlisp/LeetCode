//
// Created by 许雷 on 2018/11/8.
//

//704.二分查找
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        while (l<=r){
            int mid = (l+r)/2;
            if(nums[mid]>target){
                r = mid-1;
            }else if(nums[mid]<target){
                l = mid+1;
            }else{
                return mid;
            }
        }
        return -1;
    }
};