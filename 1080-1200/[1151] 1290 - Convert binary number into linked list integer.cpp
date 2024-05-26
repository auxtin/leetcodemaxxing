/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// May 26 2024
// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
// approach:
// two pass?
// one pass to get the number of nodes for the positons
// second pass to find the bits that are equal to `1` to add to the decimal value

// OPTIMAL solution is one pass. when using the shift operation "<< 1" it's basically creating a binary form of the number and converting it. the "| temp->val" evaluates if that bit is set so that in the next iteration it can mutiply by 2
// tc: O(n) - need to iterate thru all the nodes to find the value, but n is small and doesn't exceed 30 so it basically constant time
// sc: O(1)

class Solution
{
public:
    int getDecimalValue(ListNode *head)
    {
        ListNode *temp = head;
        int decimalValue = 0;
        while (temp)
        {
            decimalValue = (decimalValue << 1) | temp->val;
            temp = temp->next;
        }
        return decimalValue;
    }
};