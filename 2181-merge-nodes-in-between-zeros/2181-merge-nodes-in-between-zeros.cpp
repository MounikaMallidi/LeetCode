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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* res=NULL;
        ListNode* tail=NULL;
        ListNode* temp=head->next;
        int sum=0;
        while(temp!=NULL){
            if(temp->val!=0){
                sum+=temp->val;
            }
            else{
                 ListNode* newnode=new ListNode(sum);
                if(res==NULL){
                   res=newnode;
                   tail=newnode;
                }
                else{
                    tail->next=newnode;
                    tail=tail->next;
                }
                sum=0;
            }
            temp=temp->next;
        }
        return res;
    }
};