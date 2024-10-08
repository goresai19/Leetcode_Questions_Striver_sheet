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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode *temp_head = head,*prev=nullptr;
        map<int,int> m;
        for(int num:nums){
         m[num]++;
        }
        while(temp_head!=nullptr){
            if(m[temp_head->val]>0 && temp_head==head){
                  head=temp_head->next;
            }
            else if(m[temp_head->val]>0){
                  prev->next=temp_head->next;
            }
            else{
              prev=temp_head;
            }
           temp_head=temp_head->next;
        }
        return head;
    }
};