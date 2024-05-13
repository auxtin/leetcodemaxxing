// May 12, 2024
// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
// approach: we only care about the two largest elements. heapify `nums` take, the first product of one less than the first two elements
// return the product of the first largest elements
// tc: O(n),make_heap iterates thru all of `nums`
// sc: O(1)

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        make_heap(begin(nums), end(nums));
        int x_1 = nums.front();
        pop_heap(begin(nums), end(nums));
        int x_2 = nums.front();
        return (x_1 - 1) * (x_2 - 1);
    }
};