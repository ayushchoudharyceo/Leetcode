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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* odd = new ListNode(-1);
        ListNode* even = new ListNode(-1);
        ListNode* odd_head = odd;
        ListNode* even_head = even;
        int i =1;
        while(head!= NULL)
        {
            if(i%2==1)
            {
                odd->next = new ListNode(head->val);
                odd = odd->next;
            }
            else
            {
                even->next = new ListNode(head->val);
                even = even->next;
            }
            head = head->next;
            i++;
        }
        odd->next = even_head->next;
        return odd_head->next;
    }
};