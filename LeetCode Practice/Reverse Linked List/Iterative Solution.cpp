/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp;
        ListNode* reverse = NULL;
        while(head)
        {
            temp = head->next;
            head->next = reverse;
            reverse = head;
            head = temp;
        }
        return reverse;
    }
};