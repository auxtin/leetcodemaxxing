// May 26 2024
// https://leetcode.com/problems/average-value-of-even-numbers-that-are-divisible-by-three/
// approach: iterate thru `nums` and check to see if each `num` is
// - positive
// - even
// - divisible by 3
//  - the last two can be combined to be divisible to 6 since 6 is the lcm of 2 and 3
// and if it meets those criteria, add to running count, and increment a counter to calculate average later. there is an edge case of needing to check if at the end of it there were no elements that meet this criteria then you don't want to divide by 0
// tc: O(n)
// sc: O(1)
class Solution
{
public:
    int averageValue(vector<int> &nums)
    {
        int runningSum = 0, count = 0;
        for (auto num : nums)
        {
            if (num > 0 and num % 6 == 0)
            {
                runningSum += num;
                count++;
            }
        }
        return count > 0 ? runningSum / count : 0;
    }
};