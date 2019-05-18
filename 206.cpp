/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        return reverse_iteratively(head);
        return reverse_recursively(head);
    }
    ListNode *reverse_iteratively(ListNode* head) {
        ListNode* cur = head;
        ListNode* prev = NULL;
        while(cur){
            ListNode* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    // ListNode *reverse_iteratively(ListNode* head) {
    //     ListNode* cur = head;
    //     ListNode* prev = NULL;
    //     while(cur!=NULL){
    //         ListNode* next = cur->next;
    //         cur->next = prev;
    //         prev = cur;
    //         cur = next;
    //     }
    //     return prev;
    // }
    ListNode *reverse_recursively(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *new_head = reverse_recursively(head->next);
        head->next->next = head;
        head->next = NULL;
        return new_head;
    }
};