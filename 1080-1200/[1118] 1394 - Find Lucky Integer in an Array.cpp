// May 12, 2024
// https://leetcode.com/problems/find-lucky-integer-in-an-array/
// approach: some intuition about this problem is that the count of the lucky number will never exceed the size `n` of `arr`. using this fact we can sort `arr` and using the greater() function, have it be in descending order ( this will be used to find the largest lucky number).

// init count = 1, iterate thru `arr` starting at 1
//     if the current number is eq to prev, increment count
//     else
//         // lucky number found
//         if the count is eq to current num, return current num
//         else reset count to 1

// tc: O(n log n); worst case being that we have to iterate thru entire arr to find it after sorting
// sc: O(log n); depends on the sort implementation but only using `arr` space

class Solution
{
public:
    int findLucky(vector<int> &arr)
    {
        sort(begin(arr), end(arr), greater<int>());
        int count = 1, n = arr.size();
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i - 1])
            {
                count++;
            }
            else
            {
                if (arr[i - 1] == count)
                {
                    return arr[i - 1];
                }
                else
                {
                    count = 1;
                }
            }
        }
        return count == arr.back() ? count : -1;
    }
};