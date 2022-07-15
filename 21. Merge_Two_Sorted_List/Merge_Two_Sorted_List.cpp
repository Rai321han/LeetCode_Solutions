ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode *list;

    if(list1->val <= list2->val) {
        list = list1;
        list1 = list1->next;
    }
    else {
        list = list2;
        list2 = list2->next;
    }

    while (list1!=nullptr && list2!= nullptr) {
        if(list1->val <= list2->val) {
            list->next = list1;
            list1 = list1->next;
        }

        if(list1->val >= list2->val) {
            list->next = list2;
            list2 = list2->next;
        }
    }

    if(list1 == nullptr && list2 != nullptr) {
        list->next = list2;
    }

    if(list2 == nullptr && list1 != nullptr) {
        list->next = list1;
    }

    return list;
}
