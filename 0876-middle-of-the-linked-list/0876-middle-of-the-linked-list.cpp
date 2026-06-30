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

 ListNode* middleNode(ListNode* head) {

    if(head -> next == nullptr){
        return head;
    }

    if(head -> next -> next == nullptr){
        return head -> next;
    }

    ListNode* fast = head -> next;
    ListNode* slow = head;

    while(fast != nullptr){
        
        fast = fast -> next;

        if(fast != nullptr){

            fast = fast -> next;

        }

        slow = slow -> next;

    }

    return slow;

    }


    // OR below approach also Works 



    // int getLen(ListNode* head) {

    //     int len = 0;

    //     while (head != nullptr) {
    //         head = head->next;
    //         len++;
    //     }

    //     return len;
    // }

    // ListNode* middleNode(ListNode* head) {

    //     int len = getLen(head);

    //     int ans = len / 2;

    //     int count = 0;

    //     ListNode* temp = head;

    //     while (count < ans) {

    //         temp = temp->next;
    //         count++;
    //     }

    //     return temp;
    // }
};