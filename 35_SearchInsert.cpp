class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int r = nums.size()-1;
        int l = 0;
        int m;
        while (l <= r) { 
            m = l + (r - l) / 2; 
  
        // Check if x is present at mid 
        if (nums[m] == target) 
            return m; 
  
        // If x greater, ignore left half 
        if (nums[m] < target) 
            l = m + 1; 
  
        // If x is smaller, ignore right half 
        else
            r = m - 1; 
    }  
        return l; 
    }
};
