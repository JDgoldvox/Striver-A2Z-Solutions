// Given an array of integers, nums,sort the array in non-decreasing order using the merge sort algorithm. Return the sorted array.

// A sorted array in non-decreasing order is one in which each element is either greater than or equal to all the elements to its left in the array.

// Example 1
// Input: nums = [7, 4, 1, 5, 3]
// Output: [1, 3, 4, 5, 7]
// Explanation: 1 <= 3 <= 4 <= 5 <= 7.
// Thus the array is sorted in non-decreasing order.

// Example 2
// Input: nums = [5, 4, 4, 1, 1]
// Output: [1, 1, 4, 4, 5]
// Explanation: 1 <= 1 <= 4 <= 4 <= 5.
// Thus the array is sorted in non-decreasing order.

//Time Complexity O(nLog(N))
//Space Complexity O(n) 
class Solution {
   public:
    vector<int> mergeSort(vector<int>& nums) {
        algorithm(nums, 0, nums.size());
        return nums;
    }

    void algorithm(vector<int>& nums, int low, int high) {
        if(high - low <= 1) return;
        int mid = (high + low - 1) / 2;
        algorithm(nums, low, mid + 1);  // left
        algorithm(nums, mid + 1, high);  // right
        merge(nums, low, mid, high);
    }

    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> sorted;
        int left = low;
        int right = mid + 1;

        while (left <= mid && right < high) {
            // compare left and right and decide which one is smaller
            // smaller one gets put into sorted vector and pointer moves 1 place
            if (nums[left] < nums[right]) {
                sorted.push_back(nums[left]);
                left++;
            } else {
                sorted.push_back(nums[right]);
                right++;
            }
        }

        //when we are done sorting a side, we add remaining values
        while(left <= mid)
        {
            sorted.push_back(nums[left]);
            left++;
        }
        while(right < high)
        {
            sorted.push_back(nums[right]);
            right++;
        }

        //put back into nums
        for(int i = low; i < high; i++)
        {
            nums[i] = sorted[i - low];
        }
    }
};
