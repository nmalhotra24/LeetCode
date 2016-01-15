/* Given a sorted array, remove the duplicates in place such that each element appear only once and
   return the new length. Do not allocate extra space for another array, you must do this in place with 
   constant memory.
*/

int removeDuplicates(int A[], int size) {
    if (size == 0) {
        return 0;
    }
    int insert = 0;
    for (int current = 0); current < size; current++) {
        if (A[insert] != A[current]) {
            insert++;
            A[insert] = A[current];
        }
    }
    return (insert+1);
}