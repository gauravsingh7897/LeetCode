class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
            int size = nums.size();
            std::vector<int>::iterator it; 
            it = std::remove(nums.begin(), nums.end(), val);
            int count = std::distance(nums.begin(),it);
            for (int i=1;i<=size-count;i++)
                nums.pop_back();
            return count;
    }
};
