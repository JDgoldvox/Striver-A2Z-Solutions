// You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.

// An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.

// Example 1
// Input: n = 153
// Output: true
// Explanation: Number of digits : 3.
// 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153.
// Therefore, it is an Armstrong number.

// Example 2
// Input: n = 12
// Output: false
// Explanation: Number of digits : 2.
// 1^2 + 2^2 = 1 + 4 = 5.
// Therefore, it is not an Armstrong number.

#include <cmath>

class Solution {
public:
    //Time Complexity: O(Log10(N))
    //Space Comepxlity O(1)
    bool isArmstrong(int n) {

        if (n == 0) return true;

        int nCopy = n;
        int digitCount = 0;

        //calculate digits
        while (nCopy > 0)
        {
            digitCount++;
            nCopy /= 10;
        }

        //Calculate armstrong armstrongNumber
        int armstrongNumber = 0;
        nCopy = n;

        while (nCopy > 0)
        {
            armstrongNumber += std::pow(nCopy % 10, digitCount);
            nCopy /= 10;
        }

        return n == armstrongNumber;
    }
};