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
    bool hasCycle(ListNode *head) {
        ListNode *slow,*fast;
        if(!head) return false;
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
                    return false;
            }
            else
                return false;
        }while(slow!=fast);
        return true;
    }
};