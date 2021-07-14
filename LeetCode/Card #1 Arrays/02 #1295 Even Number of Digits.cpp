//02 #1295 Even Number of Digits.cpp
//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
      int counter=0, evenCount=0;
      for(int i=0; i<nums.size(); i++) {
        counter = 0;
        int number = nums[i];
        while(number!=0) {
          number /= 10;
          counter++;
        }
        if(counter%2 == 0){
          evenCount++;
        }
      }
      return evenCount;
      
    }
};