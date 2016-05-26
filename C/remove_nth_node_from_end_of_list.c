/* Given a linked list, remove the nth node from the end of list and return its head.
    
    For example,
        Given linked list: 1->2->3->4->5, and n = 2. 
        After removing the second node from the end, the linked list becomes 1->2->3->5.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* current = head;
    struct ListNode* prev = head;
    
    for (int i = 0; i < n; i++) {
        current = current->next;
    }
    if (current == NULL) {
        return prev->next;
    }
    while(current->next != NULL) {
        prev = prev->next;
        current = current->next;
    }
    prev->next = prev->next->next;
    return head;
    
}