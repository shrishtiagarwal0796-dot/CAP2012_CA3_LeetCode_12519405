class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(0);
        ListNode* t = ans;
        int c = 0;

        while (l1 != NULL || l2 != NULL) {
            int x = 0, y = 0;

            if (l1 != NULL) {
                x = l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                y = l2->val;
                l2 = l2->next;
            }
            int s = x + y + c;
            c = s / 10;
            t->next = new ListNode(s % 10);
            t = t->next;
        }
        if (c > 0) {
            t->next = new ListNode(c);
        }
        return ans->next;
    }
};
