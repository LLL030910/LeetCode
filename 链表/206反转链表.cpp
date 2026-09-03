class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // 设前一个指针为null, cur指针为head
        ListNode* prev = nullptr;
        ListNode* cur = head;
        while (cur) {
            ListNode* next = curr->next;
            cur->next = prev;
            prev = curr;
            cur = next;
        }
        return prev;
    }
};
