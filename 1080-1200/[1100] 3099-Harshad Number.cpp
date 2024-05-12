// May 11, 2024
// https://leetcode.com/problems/harshad-number/
// approach:
// 1. find out if it's a harshad number
// 2. if so, return sum of digits
// TC: O(n) where n is length of
// SC: O(1)

// 1 => 1
// 21 => 21 % 10 = 1, 21 / 10 = 2, 2 % 10 = 2
class Solution
{
public:
    // check to see if an integer is divisible by its sum of digit
    int calcSumOfX(int x)
    {
        int sum = 0;
        while (x)
        {
            sum += (x % 10);
            x /= 10;
        }
        // cout << "sum is: " << sum;
        return sum;
    }
    bool isHarshad(int x)
    {
        return x % calcSumOfX(x) == 0;
    }
    int sumOfTheDigitsOfHarshadNumber(int x)
    {
        if (isHarshad(x))
        {
            return calcSumOfX(x);
        }
        return -1;
    }
};