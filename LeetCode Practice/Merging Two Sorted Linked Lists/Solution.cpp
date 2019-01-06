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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL && l2==NULL)
            return NULL;
        else if(l2==NULL)
            return l1;
        else if(l1==NULL)
            return l2;
        
        ListNode* result;
        
        if(l1->val < l2->val)
        {
            result = new ListNode(l1->val);
            l1 = l1->next;
        }
        else
        {
            result = new ListNode(l2->val);
            l2 = l2->next;
        }
        cout<<"\n";
        
        ListNode* start = result;
        
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val < l2->val)
            {
                result->next = new ListNode(l1->val);
                l1 = l1->next;
            }
            else
            {
                result->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            result = result->next;
        }
        
        if(l1 == NULL)
            result->next = l2;
        else
            result->next = l1;
        
        return start;
    }
};