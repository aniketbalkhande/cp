//05 #0088 Merge Sorted Array
// time : O(m+n) where m & n are sizes of input array


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int i=0,j=0,k=0,p=0;

      vector<int> tempArr;
      tempArr.reserve(m+n);
     
      while(i<m && j<n) {
        if(nums1[i] < nums2[j]) {
          tempArr[k++] = nums1[i++]; 
        } else {
          tempArr[k++] = nums2[j++];
        }
      }
      
      while(i<m) {
        tempArr[k++] = nums1[i++];
      }
      
      while(j<n) {
        tempArr[k++] = nums2[j++];        
      }       
   
      while(p<(m+n)) {
        nums1[p] = tempArr[p];
        p++;
      } 
    }
};