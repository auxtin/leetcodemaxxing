// May 12, 2024
// https://leetcode.com/problems/shuffle-the-array/
// approach: indexing logic problem.
// create a new array `res` of size 2*n
// iterate from i=0:n
//     push back onto `res` `x` and `y`
//         x: nums[i], y: nums[i+n]
// return res
// tc: O(n)
// sc: O(2n) => O(n)
class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            int x = nums[i], y = nums[i + n];
            res.push_back(x);
            res.push_back(y);
        }
        return res;
    }
};