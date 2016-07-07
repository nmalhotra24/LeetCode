/* Suppose a sorted array is rotated at some pivot unknown to you beforehand.
   (i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2). Find the minimum element.
   You may assume no duplicate exists in the array.
*/

/* Solution #1: Traverse the complete array and find the minimum element.
   Complexity: O(n)
*/
int findMin(int* nums, int numsSize) {
    if (nums == NULL || numsSize < 1) return 0;
    int smallest_element = nums[0];
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] < smallest_element) {
            smallest_element = nums[i];
        }
    }
    return smallest_element;
}

/* Solution #2: Binary Search
   Complexity: O(logn)
*/
int findMin(int* nums, int numsSize) {
    int low = 0;
    int high = numsSize - 1;
    while (low < high) {
        int mid = (low+high)/2;
        if (mid != 0 && nums[mid-1] > nums[mid]) {
            low = mid;
            break;
        } else if (nums[mid] > nums[high]) {
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    return nums[low];
}