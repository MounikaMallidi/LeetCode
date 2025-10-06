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
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* nextnode=NULL;
        while(head!=NULL){
            nextnode=head->next;
            head->next=prev;
            prev=head;
            head=nextnode;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=head;
        ListNode* prev=NULL;
        ListNode* prevnode=NULL;
        ListNode* nextnode=NULL;
        ListNode* presnode=NULL;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            if(cnt==left){
                prevnode=prev;
                if(prev==NULL) presnode=head;   
                else {
                    presnode=prev->next;
                    prev->next=NULL;
                }
            }
            if(cnt==right){
                nextnode=temp->next;
                temp->next=NULL;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        temp=head;
        ListNode* newhead=reverse(presnode);
        if(prevnode!=NULL) {
            prevnode->next=newhead;
        } else {
            head=newhead;  
        }
        ListNode* tail=newhead;
        while(tail->next!=NULL) {
            tail=tail->next;
        }
        tail->next=nextnode;

        return head;
    }
};