// Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.

// Example 1
// Input: n=5, arr = [1,2,3,4,5]
// Output: [5,4,3,2,1]
// Explanation: The reverse of the array [1,2,3,4,5] is [5,4,3,2,1]

// Example 2
// Input: n=6, arr = [1,2,1,1,5,1]
// Output: [1,5,1,1,2,1]
// Explanation: The reverse of the array [1,2,1,1,5,1] is [1,5,1,1,2,1].

#include <algorithm>

class Solution {
public:

    //Solution 1
    //Time Complexity: O(n)
    //Space Complexity: O(1)
    //Analysis: Split array in half, and swap from stat and end, moving inwards
    // void reverse(int arr[], int n){
    //     //if condition is odd, it will round down, to not include the middle digit
    //     int condition = n/2;

    //     for(int i = 0; i < condition; i++)
    //     {
    //         int temp = arr[i];
    //         arr[i] = arr[(n-1)-i];
    //         arr[(n-1)-i] = temp;
    //     }
    // }

    //Solution 2
    //STL solution
    void reverse(int arr[], int n) {

        std::reverse(arr, arr + n);
    }
};
