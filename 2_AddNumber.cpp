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
        int carry=0;
        int sum = l1->val + l2->val + carry;
        ListNode* l3 = new ListNode(sum%10);
        carry = sum / 10;
        ListNode* ptr = l3;
        while(l1->next!=NULL && l2->next!=NULL){
            l1 = l1->next;
            l2 = l2->next;
            sum = l1->val + l2->val + carry;
            carry = sum/10;
            ListNode* node = new ListNode(sum%10);
            ptr->next = node;
            ptr=node;
        }
        while(l1->next!=NULL){
            l1 = l1->next;
            sum = l1->val + carry;
            carry = sum/10;
            ListNode* node = new ListNode(sum%10);
            ptr->next = node;
            ptr=node;
        }
        while(l2->next!=NULL){
            l2 = l2->next;
            sum = l2->val + carry;
            carry = sum/10;
            ListNode* node = new ListNode(sum%10);
            ptr->next = node;
            ptr=node;
        }
        if (carry!=0){
            ListNode* node = new ListNode(carry);
            ptr->next = node;
        }
        return l3;
    }   
};
