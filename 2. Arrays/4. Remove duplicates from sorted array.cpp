// Given an integer array nums sorted in non-decreasing order, remove all duplicates in-place so that each unique element appears only once.

// Return the number of unique elements in the array.

// If the number of unique elements be k, then,
// Change the array nums such that the first k elements of nums contain the unique values in the order that they were present originally.
// The remaining elements, as well as the size of the array does not matter in terms of correctness.
// The driver code will assess correctness by printing and checking only the first k elements of the modified array.

// An array sorted in non-decreasing order is an array where every element to the right of an element is either equal to or greater in value than that element.

// Example 1
// Input: nums = [0, 0, 3, 3, 5, 6]
// Output: 4
// Explanation:
// Resulting array = [0, 3, 5, 6, _, _]
// There are 4 distinct elements in nums and the elements marked as _ can have any value.

// Example 2
// Input: nums = [-2, 2, 4, 4, 4, 4, 5, 5]
// Output: 4
// Explanation:
// Resulting array = [-2, 2, 4, 5, _, _, _, _]
// There are 4 distinct elements in nums and the elements marked as _ can have any value.

#include <unordered_set>

class Solution {
public:

    //Time Complexity = O(n)
    //Space Complexity = O(1)
    int removeDuplicates(vector<int>& nums) {

        int uniqueValue = nums[0] - 1;
        int index = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            //if unique number found, add to beginning of list
            if(nums[i] != uniqueValue)
            {
                uniqueValue = nums[i];
                nums[index] = uniqueValue;
                index++;
            }
        }

        return index;
    }

    // int removeDuplicates(vector<int>& nums) {

    //     //interate over first value
    //     //interate over duplicate of the first value
    //     //if vlaue changes, interate over next value
    //     //interate over duplicate of the first value
    //     //repeat...

    //     int uniqueValue = nums[nums.size()-1] - 1;
    //     for(int i = nums.size()-1; i >= 0; i--)
    //     {
    //         if(nums[i] == uniqueValue)
    //         {
    //             //remove element
    //             nums.erase(nums.begin() + i);
    //         }
    //         else
    //         {

    //             uniqueValue = nums[i];
    //         }
    //     }

    //     return nums.size();
    // }

    // int removeDuplicates(vector<int>& nums) {

    //     std::unordered_set<int> seen;

    //     for(int i = nums.size() - 1; i >= 0; i--)
    //     {
    //         int current = nums[i];
            
    //         //try insert, if cannot, then we already have this value
    //         auto pair = seen.insert(current);
    //         bool wasSuccess = pair.second;
    //         if(!wasSuccess)
    //         {
    //             //remove value from vector
    //             nums.erase(nums.begin() + i);
    //         }
    //     }

    //     return nums.size();
    // }
};