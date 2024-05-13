// May 12, 2024
// https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/
// approach: interval problem
// using two pointers, iterate thru `startTime` and `endTime` and check to see if that range is inclusive of `queryTime`. If so increment students
// tc: O(n) where n is size of `startTime`
// sc: O(1)
class Solution
{
public:
    int busyStudent(vector<int> &startTime, vector<int> &endTime, int queryTime)
    {
        int n = startTime.size(), busyStudents = 0;
        for (int i = 0; i < n; i++)
        {
            int start = startTime[i], end = endTime[i];
            if (queryTime >= start and queryTime <= end)
                busyStudents++;
        }
        return busyStudents;
    }
};