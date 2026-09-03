ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return NULL;

        ListNode* pa = headA;
        ListNode* pb = headB;
        // 核心：当 pa 和 pb 同时走到 nullptr 时，也会相等退出循环
        while(pa != pb){
            if (pa == NULL) pa = headB;
            if (pb == NULL) pb = headA;
            pa = pa->next;
            pb = pb->next;
        }
        return pa;
    }
