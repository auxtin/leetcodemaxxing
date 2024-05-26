// May 26 2024
// https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-i/
// approach:
// naive approach would be to iterate thru `nums` and maintain a counter of the elements that are smaller than `k`. This would result in O(n) tc and constant sc
// another approach would be to first sort, then do a binary search to find the range that are less than `k`. since its sorted from least to greatest, finding the difference from 0 to the end of the range is the minimum number of operations. using binary search makes it more likely for the runtime to be log (n) to find the range. Return left because this is the index (from 0) where the condition `num < k` remains satisifed
// APPARENTLY THE BINARYU SEARCH WORKS WORSE
// tc: O(log n)
// sc: O(1)
class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        sort(begin(nums), end(nums));
        int l = 0, r = nums.size() - 1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] < k)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        return l;
    }
};