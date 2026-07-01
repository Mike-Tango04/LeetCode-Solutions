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
    ListNode* getMid(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != nullptr && fast->next != nullptr) {

            fast = fast->next->next;
            slow = slow->next;
        }

        return slow;
    }

    ListNode* reverse(ListNode* head) {

        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* forward = nullptr;

        while (curr != nullptr) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head) {

        if (head->next == nullptr) {
            return true;
        }

        ListNode* mid = getMid(head);

        ListNode* temp = mid->next;

        mid->next = reverse(temp);

        ListNode* head1 = head;
        ListNode* head2 = mid->next;

        while (head2 != nullptr) {

            if (head1->val != head2->val) {
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }

        return true;

        // Or ----------------------------->

        // vector<int> ans;

        // ListNode* temp = head;

        // while (temp != nullptr) {
        //     ans.push_back(temp->val);
        //     temp = temp->next;
        // }

        // int start = 0;
        // int end = ans.size() - 1;

        // while (start <= end) {
        //     if (ans[start] != ans[end]) {
        //         return false;
        //     }
        //     start ++;
        //     end -- ;
        // }

        // return true;
    }
};