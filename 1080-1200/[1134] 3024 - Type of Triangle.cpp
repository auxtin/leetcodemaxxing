// May 14, 2024
// https://leetcode.com/problems/type-of-triangle/
// approach: before checking to see what type of triangle it is, it must be check IF it can form a triangle. From example 2, they are alluding to the fact that the sum of any two sides must be greater than the remaining side in order to satisfy this.
// 1. check if its a triangle
//      - if not return none
// 2. classify it using the constraints they provided
//      - the best way to use the else is for the isosceles since its more easily classifiable how to show a scalene triangle
// tc: O(n); need to iterate thru nums a few times,
// sc: O(1); no need for addtl data structures
class Solution
{
public:
    bool isTriangle(vector<int> &nums)
    {
        int side1 = nums[0], side2 = nums[1], side3 = nums[2];
        if (side1 + side2 <= side3 or
            side1 + side3 <= side2 or
            side2 + side3 <= side1)
        {
            return false;
        }
        return true;
    }
    string triangleType(vector<int> &nums)
    {
        if (!isTriangle(nums))
            return "none";
        int side1 = nums[0], side2 = nums[1], side3 = nums[2];
        string triangleType = "";
        // equilateral
        if (side1 == side2 and side2 == side3)
        {
            triangleType = "equilateral";
        }
        else if (side1 != side2 and side2 != side3 and
                 side3 != side1)
        {
            triangleType = "scalene";
        }
        else
        {
            triangleType = "isosceles";
        }
        return triangleType;
    }
};

// example of 3 sides that does not make a triangle
// 3 4 8
// 3 + 4 < 8 meaning they can't reach to even form a triangle

// isosceles example: 5 5 7
// [9,4,9]
//