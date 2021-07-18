//07 #0026 Remove Duplicates from Sorted Array
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      //using set
      set<int> s;
      
      for(int i=0; i<nums.size(); i++) {
        s.insert(nums[i]); // inserted all nums values in set
      }
      nums.assign(s.begin(), s.end());// copying set to vector
      
      return s.size();
      
      //without using set
      /*
      int count = 0;
      for(int i = 1; i < nums.size(); i++){
        if(nums[i] == nums[i-1]) 
          count++;
        else 
          nums[i-count] = nums[i];
        }
      return nums.size()-count;
      */   
    }
};

