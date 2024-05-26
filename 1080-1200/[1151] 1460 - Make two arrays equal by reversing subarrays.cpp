// May 26 2024
// https://leetcode.com/problems/make-two-arrays-equal-by-reversing-subarrays/
// approach: it seems to be trivial but maybe would need to explain why its trivial. its trivial since using bubble sort, as long as `arr` has the same elements as `target` then you can eventually get it to look like each other. You can just sort both arrays and compare and see if it's equal and if you aren't allowed to modify the parameters, then you can throw it in a multiset (which is good for maintaining a sorted set with duplicates) and see if they are equal. the trade off would be it would use O(n) space instead of constant
// tc: O(log (n))
// sc: O(1)
class Solution
{
public:
    bool canBeEqual(vector<int> &target, vector<int> &arr)
    {
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        return arr == target;
    }
};