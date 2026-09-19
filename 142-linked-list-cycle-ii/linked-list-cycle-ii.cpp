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
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr || head->next==nullptr) return nullptr;

        ListNode* temp = head;
        unordered_map<ListNode*,int> mpp;
        int i=0;

        while(temp!=nullptr)
        {
            if(mpp.find(temp)!=mpp.end())
            {
                return temp;
            }
            else{
                mpp[temp] = i++;
            }
            temp = temp->next;
        }

        return nullptr;

    }
};