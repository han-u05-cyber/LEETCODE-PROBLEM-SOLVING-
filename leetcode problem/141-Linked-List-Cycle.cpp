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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL){
            return false;
        }
        map<ListNode* , bool > mp;
        ListNode* tail = head;
        
        while(tail != NULL){
            if(mp.find(tail) != mp.end()){
                return true;
            }
            mp[tail] = true;
            tail = tail->next;
        }
        return false;
    }
};