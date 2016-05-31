// Given a linked list, determine if it has a cycle in it.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/* Algorithm: Floyd’s Cycle-Finding
    1. Traverse the linked list using two pointers
    2. Move one of the pointers by one and the other by two
    3. If the pointers meet at some node, then a cycle exists. Else no cycle exists
*/
bool hasCycle(struct ListNode *head) {
    if (head == NULL) return false;
    struct ListNode* ptr_1 = head;
    struct ListNode* ptr_2 = head;
    while (ptr_1 && ptr_2 && ptr_2->next) {
        // move ptr_1 by one and ptr_2 by two
        ptr_1 = ptr_1->next;
        ptr_2 = ptr_2->next->next;
        // if they equal each other, they have met at some node -> cycle exists
        if (ptr_1 == ptr_2) {
            return true;
        }
    }
    return false;
}