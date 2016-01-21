/* Given a sorted linked list, delete all duplicates such that each element 
   appear only once.
   For example:
     Given 1->1->2, return 1->2.
     Given 1->1->2->3->3, return 1->2->3.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* current = head;
    int value = head->val;
    
    if (head == NULL) {
        return NULL;
    }
    while (current->next != NULL) {
        if (value == current->next->val) {
            current->next = current->next->next;
        } else {
            value = current->next->val;
            current = current->next;
        }
    }
    return head;
}
