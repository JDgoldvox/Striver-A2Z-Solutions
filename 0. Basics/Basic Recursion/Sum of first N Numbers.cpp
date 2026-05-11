// Given an integer N, return the sum of first N natural numbers. Try to solve this using recursion.

// Example 1
// Input : N = 4
// Output : 10
// Explanation : first four natural numbers are 1, 2, 3, 4.
// Sum is 1 + 2 + 3 + 4 => 10.

// Example 2
// Input : N = 2
// Output : 3
// Explanation : first two natural numbers are 1, 2.
// Sum is 1 + 2 => 3.

class Solution {
public:
    //Time Complexity O(N)
    //Space Complexity O(N)
    int NnumbersSum(int N) {
        int sum = 0;
        calculateNaturalNumbers(N, sum);
        return sum;
    }
private:
    void calculateNaturalNumbers(int n, int& sum)
    {
        if (n == 0) return;
        sum += n;
        calculateNaturalNumbers(--n, sum);
    }
};