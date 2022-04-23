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
        if(!head)
        {
            return head;
        }
        ListNode *p,*r,*l;
        p=head->next;
        r=head;
        l=NULL;
        while(p) 
        {
            r->next=l;
            l=r;
            r=p;
            p=p->next;
        }
        r->next=l;
        head=r;
        return head;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *slow,*fast,*p;
        slow=head;
        fast=head;
        do
        {
            
            if(fast->next)
            {
                fast=fast->next;
                if(fast->next) fast=fast->next;
                else break;
            }
            else
                break;
            slow=slow->next;
        }while(fast!=NULL);
        p=head;
        slow->next=reverseList(slow->next);
        slow=slow->next;
        while(p && slow)
        {
            if(p->val != slow->val) return false;
            p=p->next;
            slow=slow->next;
        }
        return true;
    }
};