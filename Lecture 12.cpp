#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// merge two sorted liked list

// ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//     ListNode* head = new ListNode(0);
//     ListNode* curr = head;
//     while(list1 != NULL && list2 != NULL){
//         if(list1 -> val <= list2 -> val){
//             curr -> next = list1;
//             list1 = list1 -> next;
//         } else {
//             curr -> next = list2;
//             list2 = list2 -> next;
//         }
//         curr = curr -> next;
//     }    
//     if(list1 != NULL) curr -> next = list1;
//     if(list2 != NULL) curr -> next = list2;
//     return  head->next;
// }

// merge k sorted list

// ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//     ListNode* head = new ListNode(0);
//     ListNode* curr = head;
//     while(list1 != NULL && list2 != NULL){
//         if(list1 -> val <= list2 -> val){
//             curr -> next = list1;
//             list1 = list1 -> next;
//         } else {
//             curr -> next = list2;
//             list2 = list2 -> next;
//         }
//         curr = curr -> next;
//     }    
//     if(list1 != NULL) curr -> next = list1;
//     if(list2 != NULL) curr -> next = list2;
//     return  head->next;
// }

// ListNode* mergeKLists(vector<ListNode*>& lists) {
//     if (lists.size()==0){
//         return NULL;
//     } else if (lists.size() == 1){
//         return lists[0];
//     } else {
//         int last = lists.size()-1;
//         while (last > 0) {
//             int i = 0, j = last;
//             while(i<j) {
//                 lists[i] = mergeTwoLists(lists[i], lists[j]);
//                 i++; j--;
//                 if (i >= j) {
//                     last = j;
//                 }
//             }
//         }
//         return lists[0];
//     }
// }

// reverse linked list

ListNode* reverseList(ListNode* head) {
    if (head == NULL or head->next == NULL){
        return head;
    }
    auto result = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return result;
}

int main() {
    
    return 0;
}