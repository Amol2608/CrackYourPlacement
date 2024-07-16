// # Day4 question 2 - (1290. Convert Binary Number in a Linked List to Integer)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans = 0 ;
        while(head){
            ans = (ans << 1) | head->val ;
            head = head->next ;
        } 
        return ans ;
    }
};