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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode*prev= head;
        if(head->next==nullptr)
        return head;
        ListNode*curr= head->next;
        while(curr!=nullptr){
            int tempval=__gcd(prev->val,curr->val);
            ListNode* temp= new ListNode(tempval);
            temp->next= prev->next;
            prev->next=temp;
            //cout<<curr->val<<endl;
            prev=curr;
            curr=curr->next;
        }
        return head;
    }
};