// Given an integer n, write a function to print all numbers from 1 to n (inclusive) using recursion.

// You must not use any loops such as for, while, or do-while.
// The function should print each number on a separate line, in increasing order from 1 to n.

// Example 1
// Input: n = 5
// Output:
// 1  
// 2  
// 3  
// 4  
// 5

class Solution {
public:
    // Time Complexity O(n)
    // Space Complexity O(n) (stack)
    void printNumbers(int n) {
        printRecursiveToN(1, n);
    }
private:
    void printRecursiveToN(int currentNum, int max)
    {
        if (currentNum > max) return;
        std::cout << currentNum << std::endl;
        printRecursiveToN(++currentNum, max);
    }
};