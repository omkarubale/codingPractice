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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        long num1 = 0, num2 = 0,carry = 0, sum = 0;
        ListNode *temp = NULL, *start;
        
        while(l1 || l2 || carry)
        {
            sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            if(temp != NULL)
            {
                temp->next = new ListNode(sum % 10);
                temp = temp -> next;
            }
            else
            {
                temp = new ListNode(sum % 10);
                start = temp;
            }
            
            l1 = l1 ? l1 -> next : l1;
            l2 = l2 ? l2 -> next : l2;
            carry = sum / 10;
        }
        
        return start;
    }
};