//#905 Sort Array By Parity
//https://leetcode.com/problems/sort-array-by-parity/

//TIME: O(n+n) => O(2n) => O(n)
//    where n is the size of the input array


class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
      int j=0;
      vector<int> v(nums);
      
      for(int i=0; i<nums.size(); i++) {
        if(nums[i]%2==0){
          nums[j++] = nums[i];      
        }
      }
      for(int i=0;i<v.size();i++) {
        if(v[i] %2 != 0) {
          nums[j++]= v[i];
        }
      }
      return nums;
    }
};