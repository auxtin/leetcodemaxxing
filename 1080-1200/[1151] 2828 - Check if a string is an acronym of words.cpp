// June 6, 2024
// https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/
// approach: look at the first character of each `word` in `words` and see if the acronym spells out `s`
// tc: O(n)
// sc: O(1)
class Solution
{
public:
    bool isAcronym(vector<string> &words, string s)
    {
        string acronym = "";
        for (auto word : words)
        {
            acronym += word[0];
        }
        return acronym == s;
    }
};