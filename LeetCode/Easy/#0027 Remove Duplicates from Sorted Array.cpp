//using sets as it dont allow duplicates
// Time: O(nlogn) + O(n)
public:
    int removeDuplicates(vector<int>& nums) {
      
      set<int> s;
      
      for(int i=0; i<nums.size(); i++) {
        s.insert(nums[i]); // inserted all nums values in set
      }
      nums.assign(s.begin(), s.end());// copying set to vector
      return s.size();
    }
};


// 2 pointer approach, without using set
//Time : O(n) 

/*
public:
   int removeDuplicates(vector<int>& nums) {
      int count = 0;
      for(int i = 1; i < nums.size(); i++){
         if(nums[i] == nums[i-1])  
            count++;
         else  
            nums[i-count] = nums[i];
      }
      return nums.size()-count;
   }
};
*/   
