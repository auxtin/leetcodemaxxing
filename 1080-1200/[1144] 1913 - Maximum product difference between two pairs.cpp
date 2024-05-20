// May 19, 2024
// https://leetcode.com/problems/maximum-product-difference-between-two-pairs/
// approach: how do we maximize the product difference?
// - nums[w] and nums[x] multiplies to a large number
//     maximize these values
// - nums[y] and nums[z] multiplies tobe a small number
//     minimize these values
// how do we find these values above?
// iterate thru nums and find them brute force

// tc: O(n)
// sc: O(1)
class Solution
{
public:
    int maxProductDifference(vector<int> &nums)
    {
        int firstMax = INT_MIN, secondMax = INT_MIN,
            firstMin = INT_MAX, secondMin = INT_MIN;
        for (auto num : nums)
        {
            // find the first/second max
            if (num >= firstMax)
            {
                secondMax = firstMax;
                firstMax = num;
            }
            else if (num < firstMax and num > secondMax)
            {
                secondMax = num;
            }
            // find first/second min
            if (num <= firstMin)
            {
                secondMin = firstMin;
                firstMin = num;
            }
            else if (num > firstMin and num < secondMin)
            {
                secondMin = num;
            }
        }
        // cout << firstMax << ',' << secondMax << endl
        //      <<  firstMin << ',' << secondMin;

        return firstMax * secondMax - firstMin * secondMin;
    }
};