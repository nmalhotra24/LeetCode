// Reverse a singly linked list.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
  struct ListNode* current = NULL;
  struct ListNode* temp = NULL;

  if (!head) {
    return NULL;
  } 
  while(head) {
    temp = head;
    head = head->next;
    temp->next = current;
    current = temp;
  }
  return current;
}
