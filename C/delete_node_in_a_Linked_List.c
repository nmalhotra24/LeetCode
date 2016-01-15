/* Write a function to delete a node (except the tail) in a singly linked
   list, given only access to that node. */

   /**
   * Definition for singly-linked list.
   * struct ListNode {
   *     int val;
   *     struct ListNode *next;
   * };
   */
void deleteNode(struct ListNode* node) {
  if (node == NULL || node -> next == NULL) {
    return;
  }
  node->val = node->next->val;
  node->next = node->next->next;
}
