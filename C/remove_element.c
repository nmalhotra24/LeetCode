/* Given an array and a value, remove all instances of that value in place and
   return the new length. The order of elements can be changed. It doesn't 
   matter what you leave beyond the new length.
*/

int removeElement(int* nums, int numsSize, int val) {
  int remove_element = 0;
  int new_length = 0;
  for (int i = 0; i < numsSize; i++) {
    if (nums[i] == val) {
      remove_element++;
    } else {
      nums[i - remove_element] = nums[i];
    }
    new_length = numsSize - remove_element;
    return new_length;
}
