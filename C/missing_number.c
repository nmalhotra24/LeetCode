/* Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.
    
    For example,
    Given nums = [0, 1, 3] return 2.
*/

/* Algorithm:
 1. Get the sum of the numbers -> total = n*(n+1)/2
 2. Subtract all the elements in the array from total, the number that is left over is the missing number
 */
int missingNumber(int* nums, int numsSize) {
    if (nums == NULL || numsSize < 1) return 0;
    int total = 0;
    total = numsSize*(numsSize+1)/2;
    for (int i = 0; i < numsSize; i++) {
        total = total - nums[i];
    }
    return total;
}