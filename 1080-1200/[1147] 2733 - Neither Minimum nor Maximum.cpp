// May 21, 2024
// https://leetcode.com/problems/neither-minimum-nor-maximum/
// approach:
// edge cases:
// if they are all the same number
//     - sort and see if the first number eq the last
// theres less than three elements
// tc: O(log(n))
// sc: O(1)
class Solution
{
public:
    int findNonMinOrMax(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 3)
            return -1;
        sort(begin(nums), end(nums));
        if (nums[0] == nums[n - 1])
            return -1;
        return nums[1];
    }
};