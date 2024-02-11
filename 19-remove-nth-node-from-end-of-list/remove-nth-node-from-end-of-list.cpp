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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode *t=head,*t1=head;
       int count=0,temp=0;
       if(head->next==nullptr)
       return nullptr;
       while(t!=nullptr){
           t=t->next;
           count++;
       }

       if(count==n){
           head=head->next;
           return head;
       }
       while(t1!=nullptr){
          temp++;
          if(temp==count-n){
              t1->next=t1->next->next;
              break;
          }
          t1=t1->next;
        }

        return head;
        


        
    }
};