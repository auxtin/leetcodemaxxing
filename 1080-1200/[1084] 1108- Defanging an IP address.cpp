// May 11, 2024
// approach: using a string stream, check if the current char is a '.'; if it is replace it with '[.]' instead of feeding the current char into string stream. return the string stream as a string

// TC: O(n), where n is the length of string `address` since it needs to scan thru `address` to replace '.' with '[.]'
// SC: O(n), where n is the length of the string `address`
class Solution
{
public:
    string defangIPaddr(string address)
    {
        stringstream ss;
        for (char &c : address)
        {
            if (c == '.')
            {
                ss << "[.]";
            }
            else
            {
                ss << c;
            }
        }
        return ss.str();
    }
};