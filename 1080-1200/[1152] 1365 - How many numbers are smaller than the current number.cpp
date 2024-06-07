// June 6, 2024
// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
// approach:
// brute force: iterate thru nums for each i, check each other element and see how many are less than current element
// i think this is the best approach, the other approach I thought up involved making a copy of nums (O(n) space), sorting it( O(log(n))) and the iterating thru nums, counting how many elements in the copy were less than current element (could possibly be O(n)) making the run time O(n^2 log n) instead of O(n^2)
// after reading the solutions you can improve runtime to tc O(nlogn) if you commit O(n) space for a hashmap
// tc: O(n^2)
// sc: O(1)

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> res(n, 0);
        vector<int> numCopy = nums;
        sort(numCopy.begin(), numCopy.end());
        unordered_map<int, int> hm;
        for (int i = n - 1; i >= 0; i--)
        {
            hm[numCopy[i]] = i;
        }
        for (int i = 0; i < n; i++)
        {
            res[i] = hm[nums[i]];
        }
        return res;
    }
};