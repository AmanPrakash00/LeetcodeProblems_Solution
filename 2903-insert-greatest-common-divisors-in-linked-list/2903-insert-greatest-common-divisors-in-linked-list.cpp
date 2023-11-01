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

    int commonDivisor(int num1 ,int num2){
        int mini = min(num1,num2);
        for(int i = mini ;i>=1;i-- ){
           if(num1%i == 0 && num2%i == 0){
               return i;
           }
       }
       return 1;
    }

    
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        //one element 
        if(head -> next == NULL){
            return head;
        }
        
        ListNode* prev = head ;
        ListNode* curr = head -> next;

        while(curr != NULL){
            int data = commonDivisor(prev -> val ,curr -> val);
            ListNode* temp = new ListNode(data);
            temp -> next = prev -> next;
            prev -> next = temp;
            prev = curr;
            curr = curr -> next;
        }
        return head;
    }
};