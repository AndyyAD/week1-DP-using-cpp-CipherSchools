#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Remove duplicates from sorted linked list

// ListNode* deleteDuplicates(ListNode* head) {
//     if (head == NULL or head->next == NULL){
//         return head;
//     }
//     auto curr = head;
//     ListNode *nxt = NULL;
//     while(curr->next != NULL){
//         if (curr->val == curr->next->val){
//             nxt = curr->next;
//             curr->next = curr->next->next;
//             delete(nxt);
//         } else{
//             curr = curr->next;
//         }
//     }
//     return head;
// }


// remove duplicates from unsorted linked list

// ListNode* deleteDuplicatesUnsorted(ListNode* head) {
//     ListNode dummy(-1);
    
//     unordered_map<int, int> mymap;
//     for (ListNode* tmp = head; tmp != nullptr; tmp = tmp->next) {
//         mymap[tmp->val]++;
//     }
    
//     ListNode* p = &dummy;
//     for (ListNode* tmp = head; tmp != nullptr; tmp = tmp->next) {
//         if (mymap[tmp->val] > 1) {
//             continue;
//         }
        
//         p->next = tmp;
//         p = tmp;
//     }
//     p->next = nullptr;
    
//     return dummy.next;
// }


// remove all occurence from linked list

// ListNode* removeElements(ListNode* head, int val) {
//     if (head == NULL){
//         return NULL;
//     }
//     if(head->val == val) {
//         return removeElements(head->next, val);
//     }
//     head->next = removeElements(head->next, val);
//     return head;
// }


// rotate a linked list from given position

// int getCount(ListNode* head) {
//     int count = 0;
//     ListNode* current = head;
//     while (current != NULL) {
//         count++;
//         current = current->next;
//     }
//     return count;
// }

// ListNode* rotateRight(ListNode* head, int k) {
//     if (!head or !(head->next) or k<=0){
//         return head;
//     }
//     int count = getCount(head);
//     k=k%count;
//     ListNode *p = head, *q = NULL;
//     int n = 0;
//     while (p != NULL and n < k){
//         n++;
//         p = p->next;
//     }
//     if (p == NULL){
//         return head;
//     }
//     q = head;
//     while (p->next != NULL and q != NULL) {
//         p = p->next;
//         q = q->next;
//     }
//     p->next = head;
//     head = q->next;
//     q->next = NULL;
//     return head;
// }


// Add  two numbers represented by linked list

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    if (l1 == NULL) return l2;
    else if(l2 == NULL) return l1;
    else {
        ListNode dummy(0);
        auto p=l1, q=l2, r = &dummy;
        int sum =0, carry =0;
        while(p!=NULL or q!=NULL){
            sum = (p==NULL? 0: p->val) + (q==NULL?0:q->val) +carry;
            carry = sum /10;
            sum=sum%10;
            r->next = new ListNode(sum);
            r=r->next ;

            if(p!= NULL) p=p->next;
            if(q!= NULL) q=q->next;
        }
        if(carry>0){
            r->next = new ListNode(carry);
        }
        return dummy.next;
    }
}

int main() {
    
    return 0;
}