/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
//  */

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode *i = head;
        unordered_set<ListNode*> s;

        while(i!=NULL){
            if(s.find(i) != s.end()){
                return i;
            }else{
                s.insert(i);
            }
            i=i->next;
        }
        return i;
    }
};







// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow=head;
//         ListNode* fast=head;

//         while (fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;

//             if (slow == fast) {

//                 slow = head;

//                 while (slow != fast) {
//                     slow = slow->next;
//                     fast = fast->next;
//                 }

//                 return slow;
//             }
//         }
//         return NULL;
//     }
// };