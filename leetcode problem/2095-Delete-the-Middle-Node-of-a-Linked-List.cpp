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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next == NULL) return NULL;
        int cnt = 0 ;
        ListNode* temp = head;
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        int k = cnt/2; // middle node;
        temp = head ;
        ListNode* prev = NULL;
        for(int i = 0 ; i< k ; i++){
            prev = temp;
            temp = temp->next;
        }
        //delete the middle node
        prev->next = temp->next;
        delete temp;
        return head;
    }
};