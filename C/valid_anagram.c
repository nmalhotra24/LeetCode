/* Given two strings s and t, write a function to determine if t is an anagram of s.
 
    For example,
    s = "anagram", t = "nagaram", return true.
    s = "rat", t = "car", return false.
*/

/* Algorithm:
 1. Sort both the strings using quicksort.
 2. If they are the same, return true. Else, return false
 */

void swap(char* a, char* b) {
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(char a[], int start_index, int end_index) {
    char n = a[end_index];
    int i = (start_index-1);
    int j;
    for (j = start_index; j <= end_index-1; j++) {
        if (a[j] <= n) {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i+1], &a[end_index]);
    return (i+1);
}


void quicksort(char a[], int start_index, int end_index) {
    int partition_index;
    if (start_index < end_index) {
        partition_index = partition(a,start_index,end_index);
        quicksort(a,start_index,partition_index-1);
        quicksort(a,partition_index+1,end_index);
    }
}

bool isAnagram(char* s, char* t) {
    //get length of both strings
    int s_len = strlen(s);
    int t_len = strlen(t);
    
    //if the lengths are not the same, they are not anagrams of each other -> return false
    if (s_len != t_len) {
        return false;
    }
    
    //sort both strings using quicksort
    quicksort(s, 0, s_len-1);
    quicksort(t, 0, t_len-1);
    
    //compare both the sorted strings
    for (int i = 0; i < s_len; i++) {
        if (s[i] != t[i]) {
            return false;
        }
    }
    
    //at this stage, both the strings are anagrams of each other
    return true;
}