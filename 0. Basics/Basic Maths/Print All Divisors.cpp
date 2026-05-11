#include <vector>

class Solution {
public:

    //Solution 1
    //Time Complexity: O(sqrt(n))
    //Space Complexity: O(sqrt(N))
    //Analysis: Math trick, where multiplication mirrors, so finding pairs of numbers is more efficient
    vector<int> divisors(int n) {
        vector<int> smalls;
        vector<int> bigs;

        //search through i * i bceause of symmetry in multiplication, sqrt(n) is the tipping point when symmetry starts
        //Search through sqrt(n) numbers, since it will be much faster
        for (int i = 1; i * i <= n; i++)
        {
            //Find divisor
            if (n % i == 0)
            {
                smalls.emplace_back(i);

                //Use the fact that when applying modulo, we can use maths to find mirror value by n / i
                //ignore square numbers, don't do this twice
                if (i != n / i)
                {
                    bigs.emplace_back(n / i);
                }
            }
        }

        for (int i = bigs.size() - 1; i >= 0; i--)
        {
            smalls.emplace_back(bigs[i]);
        }

        return smalls;
    }

    //Solution 2
    //Time Complexity O(N)
    //Space Complexity (sqrt(N))
    //Analysis: Slower,tthan solution 1
     vector<int> divisors(int n) {
         vector<int> sortedDivisors;

         //since its largest to smallest, do it from 0 to n
         for(int i = 1; i <= n; i++)
         {
             if(n % i == 0)
             {
                 sortedDivisors.emplace_back(i);
             }
         }

         return sortedDivisors;
     }
};