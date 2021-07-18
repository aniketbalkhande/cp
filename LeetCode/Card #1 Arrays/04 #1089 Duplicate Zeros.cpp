//04 #1089 Duplicate Zeros
//https://leetcode.com/problems/duplicate-zeros/
//Time: O(n) where n is the size of input array

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
      vector<int> newArr;
      newArr.reserve(arr.size());
      
      //logic 
      for(int i=0;i<arr.size();i++){
        if(arr[i] == 0){
          newArr.push_back(0);
        }
        newArr.push_back(arr[i]);
      }
       
      //putting the newArr with duplicate 0 back to arr
      arr.reserve(newArr.size());
      for(int i=0;i<newArr.size();i++){
        arr[i] = newArr[i];
      }
    }
};

/* reserve:
  - newArr.reserve(arr.size());  
  - will reserve the space of arr.size() for newArr
  - Request a change in capacity

*/