/* Write a program to find the node at which the intersection of two singly linked lists begins.
    For example, the following two linked lists:
        A:          a1 → a2
                          ↘
                          c1 → c2 → c3
                          ↗
        B:     b1 → b2 → b3
    begin to intersect at node c1.
 
 Notes:
    1. If the two linked lists have no intersection at all, return null.
    2. The linked lists must retain their original structure after the function returns.
    3. You may assume there are no cycles anywhere in the entire linked structure.
    4. Your code should preferably run in O(n) time and use only O(1) memory.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/* Algorithm:
 1. Get the length of list1
 2. Get the lenght of list2
 3. Set two pointers to the list and make the pointer of the longer list to step forward
 4. Scan the two lists until the intersection is found or to the end of the list, if no intersection is found
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int len_a = 0, len_b = 0;
    struct ListNode* ptr_a = headA;
    struct ListNode* ptr_b = headB;
    
    // get the length of both the lists
    while (ptr_a) {
        len_a++;
        ptr_a = ptr_a->next;
    }
    while (ptr_b) {
        len_b++;
        ptr_b = ptr_b->next;
    }
    
    // set the two pointers
    ptr_a = headA;
    ptr_b = headB;
    
    // while both the lengths are positive
    while ((len_a > 0) && (len_b > 0)) {
        // if one of the lengths is larger than the other, then the longer length steps forward
        if (len_a > len_b) {
            len_a--;
            ptr_a = ptr_a->next;
        }
        if (len_b > len_a) {
            len_b--;
            ptr_b = ptr_b->next;
        }
        // if the lengths are the same, check to see if an intersection has been found
        if (len_a == len_b) {
            if (ptr_a == ptr_b) {
                return ptr_a;
            } else {
                ptr_a = ptr_a->next;
                ptr_b = ptr_b->next;
                len_a--;
                len_b--;
            }
        }
    }
    return NULL;
}