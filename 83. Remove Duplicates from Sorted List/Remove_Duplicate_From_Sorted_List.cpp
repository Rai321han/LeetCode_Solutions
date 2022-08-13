ListNode* deleteDuplicates(ListNode* head) {
    ListNode *prev = head;
    ListNode *current = head;
    
    if(head->next == nullptr || head == nullptr) return head;

    // current = head->next;

    // while(current!=nullptr) {
    //     if(current->val == prev->val) {
    //         prev->next = current->next;
    //         current = current->next;
    //         continue;
    //     }
    //     prev = current;
    //     current = current->next;    
    // }
    ListNode *temp;
    while(current) {
            while(current->next != nullptr && current->val == current->next->val) {
                temp = current->next;
                current->next = current->next->next;
                delete temp;
            }
        current = current->next;    
    }
    return head;
}