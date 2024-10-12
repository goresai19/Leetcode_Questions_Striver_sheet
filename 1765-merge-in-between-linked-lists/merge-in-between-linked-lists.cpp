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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode*temp1,*temp2,*temp_head1=list1,*temp_head2=list2;
        int count=0;
        while(temp_head1!=nullptr){
            count++;
            if(count==a){
                temp1=temp_head1;
            }
            if(count==b+2){
                temp2=temp_head1;
                break;
            }
            temp_head1=temp_head1->next;
        }
        while(temp_head2->next!=nullptr){
            temp_head2=temp_head2->next;
        }
        
        temp1->next=list2;
        temp_head2->next=temp2;
        return list1;
        
    }
};