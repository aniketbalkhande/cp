// #1299Replace Elements with Greatest Element on Right Side
//https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/ 


//TIME: O(n^2) where n is the size of input array

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
      int max=-1;
      int flag=0;
      if(arr.size() == 1) {
        arr[0] = -1;
        return arr;
      }
      for(int i=0;i<arr.size();i++) {
        for(int j=arr.size()-1; j>i; j--) {
          if(arr[j] > max ) {
            max = arr[j];
            flag=1;
          }
        }
        if(flag=0) {
          max = -1;
        }
        arr[i] = max;
        flag=0;
        max = -1;
      }
      return arr;
    }
};