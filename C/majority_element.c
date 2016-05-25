/* Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊n/2⌋ times.
 
   You may assume that the array is non-empty and the majority element always exist in the array.
*/

/* Using the Moore Voting Algorithm which has two steps
 1. Find the candidate (most_frequent_element)
 2. Determine if the candiate (most_frequent_element) is a valid majority element.
 
 Note: For this problem, there is no need to do step 2, since "majoroity element always exists".
 */
int majorityElement(int* nums, int numsSize) {
    int most_frequent_element = nums[0], count = 1;
    
    // find the element that is occuring the most in the array
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == most_frequent_element) {
            count++;
        } else {
            count--;
        }
        if (count == 0) {
            most_frequent_element = nums[i];
            count = 1;
        }
    }
    return most_frequent_element;
}