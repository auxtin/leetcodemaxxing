// May 11, 2024
// https://leetcode.com/problems/ant-on-the-boundary/
// approach: iterate thru `nums`, at each iteration check to see if the position is equal to 0, if it is, increment the `count` that is keeping track of boundaries crossing
// TC: O(n) - need to iterate thru all of `nums`
// SC: O(1) - don't need addtl data structs
class Solution
{
public:
    int returnToBoundaryCount(vector<int> &nums)
    {
        int pos = 0, count = 0;
        for (int &num : nums)
        {
            pos += num;
            if (pos == 0)
                count++;
        }
        return count;
    }
};

// example 1:
//         |
//           + +
//               + + +
//         - - - - -
// insight: add up the numbers in nums, and check to see how many times it is equal to 0?

// example 2:
//     |
//       + + +
//             + +
//         - -
// - - - -
// 3 + 2