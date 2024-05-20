// May 19 2024
// https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/
// approach: iterate from 1 to n, and check to see if `num` is divisible by `m`. if it isn't, add `num` to num1 and if it is add it to `num2` return the difference of nums1-nums2
// tc: O(n)
// sc: O(1)
class Solution
{
public:
    int differenceOfSums(int n, int m)
    {
        int num1 = 0, num2 = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % m == 0)
                num2 += i;
            else
                num1 += i;
        }
        return num1 - num2;
    }
};

// to find out num1 and num2
//     iterate 1:n
//         if `num` % m == 0
//             num1+=num
//         else
//             num2+=num