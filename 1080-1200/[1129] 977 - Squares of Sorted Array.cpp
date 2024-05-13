// May 12, 2024
// https://leetcode.com/problems/squares-of-a-sorted-array/
// approach: two pointer + stack
// since it's sorted in order, we can use a left and right pointer to look at both ends. if the square of one side is greater than the other one, add that squared value to the stack and increment/decrement accordingly. this will result in a vector of decreasing value, so apply a reverse and return the `res`
// tc: O(n) - need to iterate thru `nums` at least once, then O(n) once more for the reverse
// sc: O(n) used for vector
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int l = 0, r = nums.size() - 1;
        vector<int> res;
        while (l <= r)
        {
            int lSquared = nums[l] * nums[l],
                rSquared = nums[r] * nums[r];
            if (lSquared > rSquared)
            {
                res.push_back(lSquared);
                l++;
            }
            else
            {
                res.push_back(rSquared);
                r--;
            }
        }
        reverse(begin(res), end(res));
        return res;
    }
};
