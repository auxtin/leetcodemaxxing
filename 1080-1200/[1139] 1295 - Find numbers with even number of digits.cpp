// May 19 2024
// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
// approach: iterate thru `nums`, and for each `num`, check the number of places by dividing by 10 and keeping count of the `places` until the `num` is divided into 0. check if the `evens` is even to increment
// tc: O(n)
// sc: O(1)
class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int n = nums.size(), evens = 0;
        for (auto num : nums)
        {
            int places = 0;
            while (num > 0)
            {
                places++;
                num /= 10;
            }
            if (places % 2 == 0)
                evens++;
        }
        return evens;
    }
};
