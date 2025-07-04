class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL ){
            return head;
        }
        ListNode* curr= head;
        while(curr!=NULL && curr->next!=NULL){
            if(curr->val==curr->next->val){
                ListNode* next=curr->next;
                delete(curr->next);
                curr->next=next;
            }
            else{
                curr=curr->next;
            }
        }
        return head;

    }
};
