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
    bool isPalindrome(ListNode* head) {
        //first find the middle node using fast and slow pointers
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next!=NULL && fast->next->next!= NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* mid =slow;

        //reverse the list from next of the middle node

        ListNode* prev=NULL;
        ListNode* cur=mid->next;

        mid->next= NULL;

        while(cur!=NULL)
        {
            ListNode* temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;

        }

        //traverse and check 

        ListNode* s1=head;
        ListNode* s2=prev;

        while(s1!=NULL && s2!=NULL)
        {
            if(s1->val != s2->val)
            {
                return false;
            }

            s1=s1->next;
            s2=s2->next;
        }

        return true;

    }
};