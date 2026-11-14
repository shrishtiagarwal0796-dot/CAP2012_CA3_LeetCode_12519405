class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode* temp = head;
        ListNode* next = head->next;
        temp->next = swapPairs(next->next);
        next->next = temp;
        return next;
    }
};
