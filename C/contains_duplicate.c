/* Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.
*/

// Method 1: Naive approach
bool containsDuplicate(int* nums, int numsSize) {
    if (nums == NULL || numsSize <= 0) return false;
    for (int i = 0; i < numSize; i++) {
        for (int j = i+1; j < numsSize; j++) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
}

