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
        ListNode* first =head;
        ListNode* second =head;
        if(head==nullptr){return false;}
        while(second !=nullptr && second->next != nullptr){
            first=first->next;
            second=second->next->next;
            if(second==first){
                return true;
            }
        }
        return false;
    }
};
