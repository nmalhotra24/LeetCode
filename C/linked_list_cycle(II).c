/* Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
   Note: Do not modify the linked list.
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
// Algorithm: Floyd's Cycle-Finding
struct ListNode *detectCycle(struct ListNode *head) {
    if (head == NULL || head->next == NULL) return NULL;
    // traverse the linked list with two pointers
    struct ListNode* ptr_1 = head;
    struct ListNode* ptr_2 = head;
    while (ptr_2->next && ptr_2->next->next) {
        // move pts_1 by one and ptr_2 by two
        ptr_1 = ptr_1->next;
        ptr_2 = ptr_2->next->next;
        // if they equal each other, a cycle exists
        if (ptr_2 == ptr_1) {
            ptr_1 = head;
            while (ptr_1 != ptr_2) {
                ptr_1 = ptr_1->next;
                ptr_2 = ptr_2->next;
            }
            return ptr_1;
        }
    }
    return NULL;
}