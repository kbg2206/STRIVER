/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
     ListNode * hasCycle(ListNode *head) {
        ListNode *slow,*fast;
        if(!head) return NULL;
        slow=head;
        fast=head;
        do
        {
            slow=slow->next;
            if(fast->next)
            {
                fast=fast->next;
                if(fast->next)
                    fast=fast->next;
                else
                    return NULL;
            }
            else
                return NULL;
        }while(slow!=fast);
        
        int pos=0;
        fast=head;
        while(fast!=slow)
        {
            fast=fast->next;
            slow=slow->next;
            pos++;
        }
        return fast;
    }
        
    ListNode *detectCycle(ListNode *head) {
        return hasCycle(head);;
    }
};