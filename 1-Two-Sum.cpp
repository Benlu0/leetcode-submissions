#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int>myVector;
        
        for (int i = 0; i < nums.size(); i++) {
            for (int x = 0; x < nums.size(); x++) {
                if (nums[i] + nums[x] == target && i != x) {
                    myVector.push_back(i);
                    myVector.push_back(x);
                    return myVector;
                }
            }
        }
        return myVector;
    }
};
// My first idea was to iterate through the array and check if num[i] + (num[i] + 1) == target
// After I realised the obvious mistake, I tried a double for loop. But it failed when the same number x2 == target. So I had to add && i != x
// Runtime was 944ms, faster than 5.85% of CPP submissions
// Memory usage was 10.2 MB, smaller than 69.5% of CPP submissions