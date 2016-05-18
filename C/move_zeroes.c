/* Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
 
   For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].
*/

void moveZeroes(int* nums, int numsSize) {
    int zero_count = 0;
    if (nums == 0 || numsSize <= 1) {
        return;
    }
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 0) { // we have found a zero -> increment the counter
            zero_count++;
        } else {
            nums[i - zero_count] = nums[i];
        }
    }
    
    while (zero_count > 0) {
        nums[numsSize - zero_count] = 0;
        --zero_count;
    }
}