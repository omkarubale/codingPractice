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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*, bool> visitedA;
        while(headA != NULL)
        {
            visitedA[headA] = true;
            headA = headA->next;
        }
        
        while(headB != NULL)
        {
            if(visitedA.find(headB) != visitedA.end())
                return headB;
            headB = headB->next;
        }
        return NULL;
    }
};