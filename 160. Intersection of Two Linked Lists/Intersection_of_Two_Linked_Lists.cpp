#include <iostream>
#include <cstdlib>

using namespace std;

class ListNode {
    public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

// ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//     int count = 0;
//     ListNode* h1 = headA;
//     ListNode* h2 = headB;
    
//     //Length of the list1
//     while(h1) {
//         count++;
//         h1 = h1->next;
//     }
//     //Length of the list2
//     while(h2) {
//         count--;
//         h2 = h2->next;
//     }

//     //headA stores the pointer of the list that has greater length.
//     if(count < 0) {
//         ListNode* temp;
//         temp = headA;
//         headA = headB;
//         headB = temp;
//     } 

//     //Move the pointer so that both list start from the same position
//     for(int i=0; i<abs(count); i++) {
//         headA = headA->next;
//     }

//     //Now move both pointer untill we get the same pointer
//     while(headA != headB) {
//         headA = headA->next;
//         headB = headB->next;
//     }
//     return headA;
// }


/////////-------Another Solution-------//////////////////
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

    ListNode* h1 = headA;
    ListNode* h2 = headB;
    
    while(h1!=h2) {
        h1 = h1->next;
        h2 = h2->next;

        if(h1 == h2) return h1;

        //Once both of them go through reassigning, 
        // they will be equidistant from the collision point.
        if(!h1) h1 = headB;
        if(!h2) h2 = headA;
    }
    return h1;
}

int main() {
    
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(10);
    head->next->next->next->next = new ListNode(15);

    ListNode* head2 = new ListNode(4);
    head2->next = new ListNode(7);
    head2->next->next = head->next->next->next;

    ListNode *res = getIntersectionNode(head, head2);
    cout<<res->val;
    return 0;
}