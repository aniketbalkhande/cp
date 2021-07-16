
// using a 3rd array 
// time: O(n)


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      vector<int> tempArr;
      int p=0;
      tempArr.reserve(nums.size());
      
      for(int i=0; i<nums.size(); i++) {
        if(nums[i] == val) {
          continue;  
        }else
          tempArr.push_back(nums[i]);
      }
      while(p<tempArr.size()){
        nums[p] = tempArr[p];
        p++;
      }
      return tempArr.size();
    }
};