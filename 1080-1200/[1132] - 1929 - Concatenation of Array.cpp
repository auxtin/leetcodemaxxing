// May 14, 2024
// https://leetcode.com/problems/concatenation-of-array/
// approach: using the insert method using c++ insert
// tc: O(2n)
// sc: O(2n)
class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        vector<int> ans(nums.begin(), nums.end());
        ans.insert(ans.begin(), nums.begin(), nums.end());
        return ans;
    }
};