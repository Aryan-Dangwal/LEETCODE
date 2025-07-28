class Solution {
public:
    int pairSum(ListNode* head) {
        // Step 1: Find the middle using slow and fast pointers
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse second half starting from 'slow'
        ListNode* prev = NULL;
        while(slow){
            ListNode* nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }

        
        ListNode* first = head;
        ListNode* second = prev;
        int maxSum = 0;

        while(second){
            int twinSum = first->val + second->val;
            maxSum = max(maxSum, twinSum);
            first = first->next;
            second = second->next;
        }

        return maxSum;
    }
};
