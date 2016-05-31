/* Given an array of integers, every element appears twice except for one. Find that single one.
   Example: Input - [1,2,2,3,4,4,1]
            Output - [3]
*/

// Method: Using XOR. Ex: A XOR A = 0 and A XOR B XOR A = B
int singleNumber(int* nums, int numsSize) {
    if (nums == NULL || numsSize <= 0) return 0;
    int single_number = nums[0];
    for (int i = 1; i < numsSize; i++) {
        single_number = single_number ^ nums[i];
    }
    return single_number;
}