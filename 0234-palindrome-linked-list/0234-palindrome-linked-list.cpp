class Solution {
public:
    ListNode* left;

    bool check(ListNode* right) {
        if (right == NULL) {
            return true;
        }

        if (!check(right->next)) {
            return false;
        }

        if (left->val != right->val) {
            return false;
        }

        left = left->next;

        return true;
    }

    bool isPalindrome(ListNode* head) {
        left = head;
        return check(head);
    }
};