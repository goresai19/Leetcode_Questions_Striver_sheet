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
    int numComponents(ListNode* head, vector<int>& nums) {
        int ans=0,n=nums.size();
        int i=0;
        ListNode* temp=head;
        set<int> s(nums.begin(),nums.end());
        while(temp!=nullptr){
            int k=0;
             while(temp!=nullptr && s.count(temp->val)){
                 temp=temp->next;
                 if(k==0){
                 ans++;
                 k=1;
                 }
             }  
             if(temp!=nullptr)
             temp=temp->next;     

        }
        return ans;
    }
};