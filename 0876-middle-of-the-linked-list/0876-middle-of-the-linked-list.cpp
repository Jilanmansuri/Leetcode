class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int size = 0;
        ListNode *i = head;

        while (i != NULL) {
            size++;
            i = i->next;
        }

        int mid = size / 2;

        int count = 0;
        i = head;

        while (count < mid) {
            i = i->next;
            count++;
        };

        return i;
    }
};