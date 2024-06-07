// June 6, 2024
// https://leetcode.com/problems/sum-of-squares-of-special-elements/
// approach:
// init a running sum
// check to see that `i` divided into `n` leaves no remainder
//     - n % i == 0
//     - i is 1 indexed
//     - square nums[i] and add to running sum
// tc: O(n)
// sc: O(1)

class Solution
{
public:
    int sumOfSquares(vector<int> &nums)
    {
        int sumSquares = 0, n = nums.size();
        for (int i = 1; i < n + 1; i++)
        {
            if (n % i == 0)
            {

                sumSquares += (nums[i - 1] * nums[i - 1]);
            }
        }
        return sumSquares;
    }
};