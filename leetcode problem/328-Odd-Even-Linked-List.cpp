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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> ev, odd;

        ListNode* temp = head;
        int cnt = 1;
        while(temp != NULL){
            if(cnt%2 == 0){
                ev.push_back(temp->val);
            }
            else{
                odd.push_back(temp->val);
            }
            cnt++;
            temp = temp->next;
        }
        temp = head;
        for(int i = 0 ; i < odd.size() ; i++){
            temp->val = odd[i];
            temp = temp->next;
        }
        int i = 0;
        while(temp != NULL){
            temp->val = ev[i];
            temp = temp->next;
            i++;
        }

        return head;

    }
};