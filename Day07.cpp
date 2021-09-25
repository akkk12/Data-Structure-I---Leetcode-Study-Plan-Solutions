// 141. Linked List Cycle
// https://leetcode.com/problems/linked-list-cycle/

 bool hasCycle(ListNode *head) {
        if(head == nullptr ) return false ;
        if(head->next == head && head!=nullptr) return true ;
        ListNode *slow = head ;
        ListNode *fast = head ;
        while(slow && fast && fast->next){
            slow = slow->next ;
            fast = fast->next->next ;
            if(slow == fast ) return true ;
        }
        return false ;
    }

// 21. Merge Two Sorted Lists
// https://leetcode.com/problems/merge-two-sorted-lists/

 ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr || l2 == nullptr) return l1 == nullptr ? l2 : l1 ; 
        ListNode *dummy = new ListNode(2) ;
        ListNode *dummyH = dummy ;
        ListNode *c1 , *c2 ;
        c1 = l1 , c2 = l2 ;
        while(c1!=nullptr && c2!=nullptr){
            if(c1->val <= c2->val){
                dummy->next = c1 ;
                c1 = c1->next;
            }
            else if(c1->val > c2->val){
                dummy->next = c2 ;
                c2 = c2->next;
            }
                      
            dummy = dummy->next ;
        }
         while(c1!=nullptr) {dummy->next = c1 ;  dummy = dummy->next ; c1 = c1->next;}
         while(c2!=nullptr) {dummy->next = c2 ;  dummy = dummy->next ;  c2 = c2->next;}
        
        return dummyH->next ;
        
    }    

// 203. Remove Linked List Elements
// https://leetcode.com/problems/remove-linked-list-elements/
ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr) return head ;
       
        ListNode *curr = head ;
        while(curr->next !=nullptr){
            if(curr->next->val == val){
                ListNode *del = curr->next ;
                curr->next = curr->next->next ;
                //delete del ;
            }
            else 
            curr = curr->next ;
        }
        
         if(head->val == val ) head = head->next ;
        
        return head ;
    }
