//判断链表是否有环
bool hasCycle(ListNode *head) {
          if(head==NULL||head->next==NULL)
              return false;
          ListNode *pFast,*pSlow;
          pFast=head;
          pSlow=head;
          while(pFast&&pFast->next){
              pSlow=pSlow->next;
              pFast=pFast->next->next;
             if(pFast==pSlow)                 return true;
         }
         return false;
     }
