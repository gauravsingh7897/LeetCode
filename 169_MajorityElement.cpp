class Solution {
public:
    int majorityElement(vector<int>& nums) {
        vector<int> copy;
        for (auto i = nums.begin(); i != nums.end(); ++i){
            copy.push_back(*i);
        }
        std::sort(copy.begin(), copy.end());
        vector<int>::iterator ip; 
        ip = std::unique(copy.begin(), copy.end());
        copy.resize(std::distance(copy.begin(), ip));
        int max=0;
        int number;
        for (ip = copy.begin(); ip != copy.end(); ++ip) {
            int count = std::count(nums.begin(), nums.end(), *ip);
            if(count>max){
                max=count;
                number=*ip;
            }
        }
        return number;
    }
};
