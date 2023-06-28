#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// reverse linked list (Teacher's method)

// ListNode* reverseList(ListNode* head) {
//     if (head == NULL or head->next == NULL){
//         return head;
//     }
//     ListNode *prev = NULL, *curr = head, *next = NULL;
//     while (curr != NULL) {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }

// reverse linked list in k group

// ListNode* reverse(ListNode* head){
//     if (head == NULL or head->next == NULL){
//         return head;
//     }
//     ListNode *prev = NULL, *curr = head, *next = NULL;
//     while (curr != NULL) {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }

// ListNode* reverseKGroup(ListNode* head, int k) {
//     auto dummyNode = new ListNode(-1);
//     auto end = dummyNode;
//     while(head!=NULL){
//         auto hd = head;
//         auto en = head;
//         for(int i=0;i<k-1;i++){
//         en = en->next;
//         if(en==NULL){
//             end->next = head;
//             return dummyNode->next;
//         }
//         }
//         auto whatNxt = en->next;
//         en->next = NULL;
//         end->next=reverse(hd);
//         end = head;
//         head = whatNxt;
//     } 

//     return dummyNode->next;
// }

// intersection of two linked list

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode* tail = headA;
    while(tail->next){
        tail = tail->next;
    }

    tail->next = headA;

    ListNode *fast = headB, *slow = headB;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast) {
            slow = headB;
            while(slow!=fast){
                slow = slow->next;
                fast = fast->next;
            }
            tail->next = NULL;
            return slow;
        };
    }
    tail->next = NULL;
    return NULL;
}

int main() {
    
    return 0;
}