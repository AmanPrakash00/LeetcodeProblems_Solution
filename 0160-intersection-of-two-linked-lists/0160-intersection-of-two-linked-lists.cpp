/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int> m;
        while(headA != NULL){
            // int data = headA -> val ;
            m[headA] = headA -> val;
            headA = headA -> next;
        }

        // temp = headB;
        
        while( headB != NULL){
            if(m.find(headB) != m.end()){
                return headB;
            }
            headB = headB -> next;
        }
        return NULL;
    }
};