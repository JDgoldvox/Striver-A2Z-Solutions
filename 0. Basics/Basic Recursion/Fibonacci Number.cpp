// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

// F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.

// Given n, calculate F(n).

// Example 1
// Input : n = 2
// Output : 1
// Explanation : F(2) = F(1) + F(0) => 1 + 0 => 1.

// Example 2
// Input : n = 3
// Output : 2
// Explanation : F(3) = F(2) + F(1) => 1 + 1 => 2.

class Solution {
public:
    //Time Complexity O(2^n) , since each recursive call adds 2 more recursive calls
    //Space Complexxity O(n) , for each stack on recursive call
    int fib(int n) {

        if (n <= 1)
        {
            return n;
        }

        int last = fib(n - 1);
        int secondLast = fib(n - 2);

        return last + secondLast;
    }
};