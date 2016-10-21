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
    ListNode *detectCycle(ListNode *head) {
       
        ListNode *pfast = head;
        ListNode *pslow = head;
        int flag = 0;
        
        
        while(pfast && pfast->next)
        {       
            pslow = pslow->next;
            pfast = pfast->next->next;
            
            if(pslow == pfast)
            {
                flag = 1;
                break;
            }
        }
        
        if(flag)
        {
            pslow = head;
            
            while(pslow!=pfast)
            {
                pslow=pslow->next;
                pfast=pfast->next;
            }
            return pslow;
            
        } 
       else
        return NULL;
        
    }
};

