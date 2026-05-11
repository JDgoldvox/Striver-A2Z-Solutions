// Given an integer n, write a function to print all numbers from n to 1 (inclusive) using recursion.

// You must not use any loops such as for, while, or do-while.
// The function should print each number on a separate line, in decreasing order from n to 1

// Example 1
// Input: 5
// Output:
// 5
// 4
// 3
// 2

#include <iostream>

class Solution {
public:
    //Time Complexity O(n)
    //Space Complexity O(n)
    void printNumbers(int n) {
        printNumbersFromNto1(n);
    }
private:
    void printNumbersFromNto1(int currentNum)
    {
        if (currentNum == 0) return;
        std::cout << currentNum << std::endl;
        printNumbersFromNto1(--currentNum);
    }
};