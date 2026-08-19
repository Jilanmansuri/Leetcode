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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* curr = head;
        ListNode* prevGroupTail = nullptr;

        int groupSize = 1;

        while (curr) {
            ListNode* groupStart = curr;

            int count = 0;
            ListNode* temp = curr;

            // Find actual group size
            while (temp && count < groupSize) {
                temp = temp->next;
                count++;
            }

            // Even length -> reverse
            if (count % 2 == 0) {

                ListNode* prev = nullptr;

                for (int i = 0; i < count; i++) {
                    ListNode* next = curr->next;

                    curr->next = prev;
                    prev = curr;
                    curr = next;
                }

                // Previous group ko reversed group se connect
                if (prevGroupTail) {
                    prevGroupTail->next = prev;
                } else {
                    head = prev;
                }

                // Original start ab tail ban gaya
                groupStart->next = curr;

                prevGroupTail = groupStart;
            }
            else {
                // Odd group -> no reversal

                curr = temp;

                // Is group ka last node find karo
                ListNode* tail = groupStart;

                for (int i = 1; i < count; i++) {
                    tail = tail->next;
                }

                prevGroupTail = tail;
            }

            groupSize++;
        }

        return head;
    }
};