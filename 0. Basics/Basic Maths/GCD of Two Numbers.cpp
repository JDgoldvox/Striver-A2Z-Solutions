// You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.

// The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.

// Example 1
// Input: n1 = 4, n2 = 6
// Output: 2
// Explanation: Divisors of n1 = 1, 2, 4, Divisors of n2 = 1, 2, 3, 6
// Greatest Common divisor = 2.

// Example 2
// Input: n1 = 9, n2 = 8
// Output: 1
// Explanation: Divisors of n1 = 1, 3, 9 Divisors of n2 = 1, 2, 4, 8.
// Greatest Common divisor = 1.

#include <algorithm>

class Solution {
public:

    //Solution 1
    //Time Complexity O(min(n1,n2))
    //Space Comeplxity O(1)
    //Analysis: Euclidean algoithm works by finding the modulo of the smallest number, until one value reaches 0,
    //after 0 has been reached, the other value is the greatest common denominator
    int GCD(int n1, int n2) {

        //Euclidean algorithm
        while (n1 != 0 && n2 != 0)
        {
            //find smallest
            if (n1 > n2)
            {
                n1 %= n2;
            }
            else //n2 > n1
            {
                n2 %= n1;
            }
        }

        return n1 == 0 ? n2 : n1;
    }

    //Solution 2
    //Time Complexity: O(N)
    //Space Complexity O(1)
    //Analysis: Less efficient than Solution 1
    int GCD(int n1, int n2) {
        int largestN = n1 > n2 ? n1 : n2;

        //Go down from largest number, until 1, to find the GCD
        for (int i = largestN; i > 0; i--)
        {
            //find if there is a common denominator
            if ((n2 % i == 0) && (n1 % i == 0))
            {
                return i;
            }
        }

        return 0;
    }
};