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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        // Dummy node for result list
        ListNode* dummy = new ListNode(0);

        // Pointer to build result
        ListNode* curr = dummy;

        int carry = 0;

        // Traverse until all nodes and carry are finished
        while (l1 != NULL || l2 != NULL || carry != 0) {

            int sum = carry;

            // Add l1 value
            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }

            // Add l2 value
            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }

            // Update carry
            carry = sum / 10;

            // Create new node
            curr->next = new ListNode(sum % 10);

            // Move pointer
            curr = curr->next;
        }

        return dummy->next;
    }
};