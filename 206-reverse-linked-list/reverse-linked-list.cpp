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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=nullptr;
        ListNode *t=head;
        ListNode *nextadd;
        while(t!=nullptr){
            nextadd=t->next;
            t->next=prev;
            prev=t;
            t=nextadd;
       }
       head=prev;
       return head;
    }
};