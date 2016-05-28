/* Given a list, rotate the list to the right by k places, where k is non-negative.
    For example:
    Given 1->2->3->4->5->NULL and k = 2,
    return 4->5->1->2->3->NULL.
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    int length = 0;
    struct ListNode* current;
    if (head == NULL || head->next == NULL || k < 0) return head;
    current->next = head;
    // get the length of the list
    while (current->next != NULL) {
        length++;
        current = current->next;
    }
    k = length - k%length;
    current->next = head;
    while (k > 0) {
        current = current->next;
        k--;
    }
    head = current->next;
    current->next = NULL;
    return head;
}