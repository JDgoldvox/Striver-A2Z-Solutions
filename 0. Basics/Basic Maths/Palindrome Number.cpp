// You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.

// A palindrome number is a number which reads the same both left to right and right to left.

// Example 1
// Input: n = 121
// Output: true
// Explanation: When read from left to right : 121.
// When read from right to left : 121.

// Example 2
// Input: n = 123
// Output: false
// Explanation: When read from left to right : 123.
// When read from right to left : 321.

//Time Complexity: O(Log10(N))
//Space Complexity O(1)
class Solution {
public:
    bool isPalindrome(int n) {

        int reversedN = 0;
        int copyOfN = n;

        while (n > 0)
        {
            reversedN *= 10; //create room for new digit in reversed number
            reversedN += n % 10; //extract and add digit to reversed number
            n /= 10; //remove last digit in original number
        }

        //check for is Palindrome
        return reversedN == copyOfN;

    }
};