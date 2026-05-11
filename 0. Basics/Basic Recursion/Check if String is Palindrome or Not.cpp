// Given a string s, return true if the string is palindrome, otherwise false.
// A string is called palindrome if it reads the same forward and backward.

// Example 1
// Input : s = "hannah"
// Output : true
// Explanation : The string when reversed is --> "hannah", which is same as original string , so we return true.

// Example 2
// Input : s = "aabbaA"
// Output : false
// Explanation : The string when reversed is --> "Aabbaa", which is not same as original string, So we return false.

// Time complexity = O(N)
// Space Complexity = O(1)
// Explanation: checking both ends and sliding towards middle and checking if the characters are the same to fulfil palindrome.

class Solution {
public:
    //Time Complexity: O(n)
    //Space Complexity: O(1)
    //Analysis: Loop through half of string, then check if palindrome by checking start and end, moving inwards
    bool palindromeCheck(string& s) {
        const int stringSize = s.size();

        //loop through half of string
        for (int i = 0; i < stringSize / 2; i++)
        {
            //check i and n-i for palindrome
            if (s[i] != s[(stringSize - 1) - i])
            {
                return false;
            }
        }

        return true;
    }
};