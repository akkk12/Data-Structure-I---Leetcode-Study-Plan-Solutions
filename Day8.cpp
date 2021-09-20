// 206. Reverse Linked List
// https://leetcode.com/problems/reverse-linked-list/

class Solution {
public:
    // head -> 1->2->3->4->5
    // we need to reverse all the links 
    // 1<-2<-3<-4<-5 <-prev 
    
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr ) return head ;
        ListNode *curr = head ; // current pointer 
        ListNode *nextNode = nullptr ; // nextnode :- node after current pointer 
        ListNode *prevNode = nullptr ; // prevnode :- node before current pointer 
        while(curr!=nullptr){  // till current is not equal to nullptr 
            nextNode = curr->next ;  // store the nextNode 
            curr->next = prevNode ;  // next of current will point to the previous node 
            prevNode = curr ;  // previous node becomes the current node 
            curr = nextNode ;  // current node becomes equal to the nextNode 
        }
        return prevNode ;  // our new head 
    }
};


// 83. Remove Duplicates from Sorted List
// https://leetcode.com/problems/remove-duplicates-from-sorted-list/
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head ;        
        ListNode *curr = head ;
        while(curr->next !=nullptr){
            if(curr->val == curr->next->val){
                curr->next = curr->next->next  ;
            }
            else 
            curr = curr->next ;
        }
        return head ;
    }
};
