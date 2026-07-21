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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k==0)
        {
            return head;
        }
        int size =1;
        ListNode* last = head;
        while(last->next != NULL)
        {
            last  = last->next;
            size++;
        }
        last-> next = head;
        k = k%size;
        int tail_ = size-k;
        ListNode* tail = head;
        for(int i=1; i<tail_;i++)
        {
            tail = tail->next;
        }
        ListNode* newHead = tail->next;
        tail ->next = NULL;
        return newHead;
    }
};