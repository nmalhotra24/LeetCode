/* Given an array of integers and an integer k, find out whether there are two distinct indices i and j in the array such that nums[i] = nums[j] and the difference between i and j is at most k.
*/

bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    bool flag = false;
    if (nums == NULL || numsSize < 0 || k < 0) return flag;
    for (int i = 0; i < numsSize; i++) {
        for (int j = i+1; j < numsSize; j++) {
            if (nums[i] == nums[j] && (j-i<= k)) {
                flag = true;
            }
        }
    }
    return flag;
}