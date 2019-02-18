/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
  public:
    ListNode *removeElements(ListNode *head, int val)
    {
        if (!head || (head->next == NULL && val == head->val))
            return NULL;
        if (head->next == NULL)
            return head;

        while (head && head->val == val)
            head = head->next;

        ListNode *traveller = head;
        while (traveller && traveller->next != NULL)
        {
            if (traveller->next->val == val)
                traveller->next = traveller->next->next;
            else
                traveller = traveller->next;
        }

        return head;
    }
};