// May 12, 2024
// https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/
// approach:
// create a vector strings to hold the words `words`
// using a istringstream, tokenize the words and insert into `words`
// iterate thru `words` using index based array
// check if current word can contains `searchWord` starting at pos = 0
// if so, return current index + 1
// return -1
// tc: O(n), may need to iterate thru entire `sentence` to find prefix
// sc: O(w), where w is # of words
// question: how does it work if the searchWord is not at the start of the word? ans: then it doesn't count. strictly needs to be a prefix
class Solution
{
public:
    int isPrefixOfWord(string sentence, string searchWord)
    {
        // vector<string> words;
        istringstream iss(sentence);
        string word;
        int wordCount = 1;
        while (iss >> word)
        {
            // words.push_back(word);
            if (word.find(searchWord) == 0)
            {
                return wordCount;
            }
            wordCount++;
        }
        // int n = words.size();
        // for(int i = 0; i < n; i++) {
        //     string currWord = words[i];
        //     if(currWord.find(searchWord) == 0) {
        //         return i + 1;
        //     }
        // }
        return -1;
    }
};