// May 19 2024
// https://leetcode.com/problems/number-of-employees-who-met-the-target/
// approach: init count of those who met the target `count`. iterate thru `hours` and check if each element > `target` and increment `count`
// tc: O(n)
// sc: O(1)
class Solution
{
public:
    int numberOfEmployeesWhoMetTarget(vector<int> &hours, int target)
    {
        int count = 0;
        for (auto hour : hours)
        {
            if (hour >= target)
                count++;
        }
        return count;
    }
};