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
    bool isPalindrome(ListNode* head) {
        vector<int> numbers;
        while(head)
        {
            numbers.emplace_back(head->val);
            head = head->next;
        }
        
        for(int i = 0; i < numbers.size()/2; i++)
            if(numbers[i] != numbers[numbers.size()-i-1])
                return false;
        return true;
    }
};