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
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode* l=head;
        ListNode *newlist=head;
        while(l!=nullptr){
            l=l->next;
            count++;
        }
        int c=(count/2)+1;
        count=0;
        while(newlist!=nullptr){
            count++;
            if(count==c){
              head=newlist;
            }
            newlist=newlist->next;
        }
        return head;
    }
};