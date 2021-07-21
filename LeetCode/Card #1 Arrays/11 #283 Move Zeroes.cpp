// #283 Move Zeroes
//https://leetcode.com/problems/move-zeroes/

//TIME: O(n+n) => O(2n) => O(n) 
// where n is the size of the input array

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int j=0;
      for(int i=0; i<nums.size(); i++) {
        if(nums[i] != 0){
          nums[j++] = nums[i];
        }
      }
      while(j<nums.size()) {
        nums[j++] = 0;
      }
    }
};