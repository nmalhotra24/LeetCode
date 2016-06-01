// Given a singly linked list, determine if it is a palindrome.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    //an empty list is a palindrome
    if (head == NULL || head->next == NULL) return true;
    
    //(1) Find the middle element of the linked list by moving two pointers - one at 1x speed and the other at 2x speed. The pointer moving at 1x speed points to the middle when the other pointer at 2x speed reaches the end of the linked list.
    struct ListNode* fast = head->next;
    struct ListNode* slow = head;
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    
    //(2) Reverse the second part of the linked list from the middle to the end of the list.
    struct ListNode* mid = slow;
    struct ListNode* revhead = slow->next;
    slow->next = NULL;
    while (revhead != NULL) {
        struct ListNode* temp = revhead->next;
        revhead->next = mid;
        mid = revhead;
        revhead = temp;
    }
    
    //(3) Use two pointers; one from the original start node (head) and one from the start of the reversed second part of the list (mid). Move to the next nodes and compare the value. If they are equal until they hit the middle of the list, then the linked list is a palindrome.
    while (head && mid) {
        if (head->val != mid->val) {
            return false; //not a palindrome
        } else {
            head = head->next;
            mid = mid->next;
        }
    }
    return true;
}