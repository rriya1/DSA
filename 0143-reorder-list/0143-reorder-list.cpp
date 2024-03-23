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
    void reorderList(ListNode* head) 
    {
        if(!head || !head->next || head->next->next==NULL) return;

        ListNode *slow=head;
        ListNode *fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        //slow is the middle, now reversing list from middle
        ListNode *left=NULL;
        ListNode *curr=slow->next;
        slow->next=NULL;
        ListNode *right= curr->next;
        while(curr!=NULL){
            curr->next=left;
            left=curr;
            curr=right;
            if(right!=NULL)
                right=right->next;
        }
        //current is head of reversed linkedlist
        ListNode *l1=head;
        ListNode *l2=left;

        while(l1 && l2){
            ListNode *l1next=l1->next;
            ListNode* l2next=l2->next;
            l1->next=l2;
            if(l1next!=NULL)
                l2->next=l1next;
            l1=l1next;
            l2=l2next;
        }
        return;
    }
};