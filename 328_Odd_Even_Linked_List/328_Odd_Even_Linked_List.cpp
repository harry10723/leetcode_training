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
    ListNode* oddEvenList(ListNode* head) {
        if (!head) return head;
        ListNode* old = head;
        ListNode* evenhead = head -> next;
        ListNode* even = evenhead;
        while(old && even &&yeven -> next){
            old -> next = old -> next -> next;
            even -> next = even -> next -> next;
            old = old -> next;
            even = even -> next;
        }
        old -> next = evenhead;
        return head;
    }
};