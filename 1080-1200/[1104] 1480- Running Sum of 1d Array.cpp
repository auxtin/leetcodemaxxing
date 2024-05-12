// May 11, 2024
// https://leetcode.com/problems/running-sum-of-1d-array/
// approach: basically a prefix sum. starting at index 1, to n, nums[i] = nums[i-1] + nums[i]
// TC: O(n)
// SC: O(1) if we modify the orig array and return that

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};