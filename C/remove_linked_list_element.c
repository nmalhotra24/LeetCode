/* Remove all elements from a linked list of integers that have value val.
   Example:
      Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6, val = 6
      Return: 1 --> 2 --> 3 --> 4 --> 5
*/ 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
  if (head == NULL) return head;

  struct ListNode* current = head;
  struct ListNode* prev = NULL;

  while (current) {
    if (current -> val == val) {
      struct ListNode* del_node = current;
      current = current -> next;
 
      if (prev != NULL) {
	prev -> next = current;
      } else {
	head = current;
      }
      free(del_node);
    } else {
      prev = current;
      current = current -> next;
    }
  }
  return head; 
}
