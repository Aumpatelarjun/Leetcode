/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        if(!head || !head->next) return head;
        ListNode* new_h = new ListNode(0);
        new_h -> next = head;
        ListNode* prev =  new_h;
        ListNode* curr = head;


        while(prev->next && curr->next){
            prev -> next = curr ->next ;
            curr->next = curr->next -> next ;
            prev -> next -> next = curr ;
            prev= curr;
            curr = curr->next;
        }
         return new_h -> next;
    }
};



// (a->b->c->d)  =>   (b->a->d->c)
//  a-> b-> (b->next) = b -> a -> (b->next ) 