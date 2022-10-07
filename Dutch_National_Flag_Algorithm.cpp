Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
  
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0;
        int mid=0;
        int n=nums.size();
        int high=n-1;


        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }else if(nums[mid]==1)mid++;
            else {
                swap(nums[mid],nums[high]);
                high--;
            }
            // 0 0(low) 0 1(mid) 0 1(high) 2
        }

    }
};
