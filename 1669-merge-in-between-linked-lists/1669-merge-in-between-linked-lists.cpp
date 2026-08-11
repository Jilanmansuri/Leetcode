/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {

        ListNode* prevA = list1;

        // a-1 index tak jao
        for (int i = 0; i < a - 1; i++) {
            prevA = prevA->next;
        }

        ListNode* afterB = list1;

        // b+1 index tak jao
        for (int i = 0; i <= b; i++) {
            afterB = afterB->next;
        }

        // list2 ko insert karo
        prevA->next = list2;

        // list2 ke last node tak jao
        ListNode* last = list2;

        while (last->next != nullptr) {
            last = last->next;
        }

        // list2 ko list1 ke remaining part se connect karo
        last->next = afterB;

        return list1;
    }
};