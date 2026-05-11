// You are given an integer n. Return the integer formed by placing the digits of n in reverse order.

// Example 1
// Input: n = 25
// Output: 52
// Explanation: Reverse of 25 is 52.

// Example 2
// Input: n = 123
// Output: 321
// Explanation: Reverse of 123 is 321.

// Example 3
// Input: n = 54
// Output: 45

#include <vector>

class Solution {
public:

    //solution 1
    //Time Complexity O(Log10(N))
    //Space Complexity O(1)
    //Analysis: Extract digits from n, and keep adding to the reversed number by multiplying by 10, letting us add the end of the int
    //
    int reverseNumber(int n) {
        int reverseNumber = 0;

        while (n > 0)
        {
            reverseNumber *= 10; //Multiply by 10 to create space for new digit
            reverseNumber += (n % 10); //Add new digit
            n /= 10; //remove last digit in n
        }

        return reverseNumber;
    }

    //Solution 2:
    // Time Complexity O(N)
    // Space Complexity O(Log10(N))
    // Analysis: Just not as efficient as solution 1
    // 
    int reverseNumber(int n) {
        int num = 0;
        std::vector<int> numbers;

        //take one number off at a time
        while(n > 0)
        {
            numbers.emplace_back(n % 10);
            n /= 10;
        }

        //reverse numbers
        int multiple = 0;
        for(int i = numbers.size() - 1; i >= 0; i--)
        {
            if(multiple == 0)
            {
                num += numbers[i];
                multiple = 10;
            }
            else
            {
                num += multiple * numbers[i];
                multiple *= 10;
            }
        }

        return num;
    }
};