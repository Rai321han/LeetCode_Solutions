
#include <iostream>
#include <map>

using namespace std;

class ListNode {
    public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

//space O(n);
//Time O(nlogn)
// bool hasCycle(ListNode *head) {
//         if(!head) return false;

//         map<ListNode*,bool>MAP;
//         while(head) {
//             if(MAP[head]) return true;
//             MAP[head] = true;
//             head = head->next;
//         }
//         return false;
// }


//Floyd Cycle Detection Algorithm (Fast and Slow pointer)
//Time O(n)
//Space O(1)
bool hasCycle(ListNode *head) {
        if(!head) return false;
        ListNode *slow=head,*fast=head;
        while(fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast) return true;
        }
        return false;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(10);

    (hasCycle(head))?cout<<"True":cout<<"false";
    return 0;
}

