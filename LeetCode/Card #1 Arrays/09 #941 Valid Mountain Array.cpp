
// #941 Valid Mountain Array
// TIME: O(n-1) i.e. O(n) where n is the length of array
// https://leetcode.com/problems/valid-mountain-array/

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
      int climbing = 0, falling = 0;
      int fallStarted = 0, climbStarted = 0;
      int count=0;
      int n = arr.size();
      
      if(n < 3)
        return false;
 
      //traverse the array leaving last element
      for(int x=0; x < n-1; x++) {
    
        //checking if climb started 
        if(arr[x] < arr[x+1] && fallStarted == 0) {
          climbing = 1;
          climbStarted = 1;
          count++;
          if(climbing == 1) continue;
        
        }else if(arr[x] > arr[x+1] && climbStarted == 1){//checking if fall started 
           climbing=0;
           falling = 1;
           fallStarted = 1;
           count++;
           if(falling == 1)  continue;
          }
        }
          
      if(climbing==0 && climbStarted == 1 && falling == 1 && fallStarted == 1 && count==n-1) {
        return true;
      }else {
        return false;
      } 
    }
};