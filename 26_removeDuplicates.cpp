class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    if (nums.size()==0)
        return 0;
    int count = 0;
    for (int j=1;j<nums.size();j++){
        if (nums.at(j) != nums.at(count)){
            count++;
            // nums.insert(nums.begin()+count,nums.at(j));
            // nums.erase(nums.begin()+j);
            replace(nums.begin()+count, nums.begin()+count+1, nums.at(count), nums.at(j));
        }
    }
    return count+1;
    }
};
