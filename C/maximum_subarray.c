/* Find the contiguous subarray within an array (containing at least one number) which has the largest sum.
   For example:
        Given the array [−2,1,−3,4,−1,2,1,−5,4], the contiguous subarray [4,−1,2,1] has the largest sum = 6.

   Algorithm:
    - Initialize two variables -> max_sum and max_sum_here
    - Interate through each element of the array 
        - if max_sum_here is positive, then add max_sum_here to the current element
        - else, max_sum_here = nums[i]
        - compare the values stored in max_sum_here and max_sum. 
        - If max_sum < max_sum_here, then max_sum = max_sum_here
    - return max_sum
 
*/

int maxSubArray(int* nums, int numsSize) {
    int max_sum = INT_MIN;
    int max_sum_here = 0;
    for (int i = 0; i < numsSize; i++) {
        if (max_sum_here >= 0) {
            max_sum_here = max_sum_here + nums[i];
        } else {
            max_sum_here = nums[i];
        }
        if (max_sum < max_sum_here) {
            max_sum = max_sum_here;
        }
    }
    return max_sum;
}