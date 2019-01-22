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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode *result = head;
        ListNode *temp = head->next;
        while(head->next != NULL)
        {
            temp = head->next;
            if(head->val == temp->val) head->next = temp->next;
            else head = temp;
        }
        if(head->next != NULL)
            head = temp;
        return result;   
    }
};