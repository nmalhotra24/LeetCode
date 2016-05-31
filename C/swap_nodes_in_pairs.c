/* Given a linked list, swap every two adjacent nodes and return its head.
   For example,
    Given 1->2->3->4, you should return the list as 2->1->4->3.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if (head == NULL || head->next == NULL) return head;
    struct ListNode* new_head = head->next; // the head of the new list
    struct ListNode* current = head;
    struct ListNode* prev = NULL;
     struct ListNode* temp = NULL;
    
    while (current != NULL && current->next != NULL) {
        // adjust the prev node so that it links to the remaining of the list
        if (prev != NULL) {
            prev->next = current->next;
        }
        prev = current;
        
        // swap the two nodes
        temp = current->next->next;
        current->next->next = current;
        current->next = temp;
        
        // move to the new two pairs
        current = current->next;
    }
    return new_head;
}