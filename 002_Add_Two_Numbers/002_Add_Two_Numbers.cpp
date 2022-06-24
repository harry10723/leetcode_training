#include <cstddef>

//Definition for singly-linked list.
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode  newHead(0);
        ListNode* t = &newHead;
        if (l1 == NULL || l2 == NULL) return NULL;
        int tmp = 0 ;
        while(l1 != NULL || l2 != NULL || tmp == 1){
            tmp += (l1? l1 -> val : 0) + (l2? l2 -> val : 0);
            if (tmp >= 10){
                t -> next = new ListNode(tmp-10);
                tmp = 1;
            }
            else{
                t -> next = new ListNode(tmp);
                tmp = 0;
            }
            t = t -> next;
            if (l1) l1 = l1 -> next;
            if (l2) l2 = l2 -> next;
            
        }
        return newHead.next;
    }
};