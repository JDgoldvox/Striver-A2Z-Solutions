// You are given an integer n. You need to check if the number is prime or not. Return true if it is a prime number, otherwise return false.

// A prime number is a number which has no divisors except 1 and itself.

// Example 1
// Input: n = 5
// Output: true
// Explanation: The only divisors of 5 are 1 and 5 , So the number 5 is prime.

// Example 2
// Input: n = 8
// Output: false
// Explanation: The divisors of 8 are 1, 2, 4, 8, thus it is not a prime number.

class Solution {
public:
    //Time Complexity: O(sqrt(N))
    //Space Complexity: O(1)
    bool isPrime(int n) {
        if (n == 1) return false;

        // i*i tipping point for repeating values instead looping n
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }

        return true;
    }
};