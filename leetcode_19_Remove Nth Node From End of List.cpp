/*:defition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//快慢指针
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* fast(head), *slow(head);
        
        for(int i=0;i<n;i++)
        {
            if(fast == NULL)
                return head;
            else
                fast = fast->next;
                
        }
        
        if(fast == NULL)
            return head->next;
        
        while(fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next;
            
        }
        slow->next = slow->next->next;
        
        return head;
        
    }

//
};

/*
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* forward(head), *backhead(head);
        while(forward && n--) forward = forward->next;
        if(forward == NULL) return backhead->next;
        while(forward->next){
            forward = forward->next;
            head = head->next;
        }
        head->next = head->next->next;
        return backhead;
    }
};
*/
