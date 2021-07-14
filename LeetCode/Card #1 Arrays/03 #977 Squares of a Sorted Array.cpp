//03 #977 Squares of a Sorted Array
//https://leetcode.com/problems/squares-of-a-sorted-array/


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      int temp;
       for(int i=0; i<nums.size(); i++) {
         nums[i] *= nums[i];
       }
/*      for(int i=0; i<nums.size(); i++) {
        for(int j=0; j<nums.size()-i-1; j++) {
         if(nums[j] > nums[j+1]) {
           temp = nums[j];
           nums[j] = nums[j+1];
           nums[j+1] = temp;
         }
       }
      }*/
      sort(nums.begin(), nums.end());
      return nums;
    }
};