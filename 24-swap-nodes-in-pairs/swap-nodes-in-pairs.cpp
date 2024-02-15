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
    ListNode* swapPairs(ListNode* head) {
      if(head==nullptr || head->next==nullptr)
      return head;
      ListNode *t=head;
      ListNode *r=head->next;
      int temp;

      while(t!=nullptr && r!=nullptr){
          temp=r->val;
          r->val=t->val;
          t->val=temp;
          if(t->next==nullptr || r->next==nullptr)
          break;
          t=t->next->next;
          r=r->next->next;
          }
        return head;
    }
};