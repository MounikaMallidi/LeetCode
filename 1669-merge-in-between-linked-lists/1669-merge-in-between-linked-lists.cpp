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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* res=NULL;
        ListNode* tail=NULL;
        int c=0;
        while(temp1!=NULL){
            if(c<a){
                ListNode* newnode=new ListNode(temp1->val);
                if(res==NULL){
                    res=newnode;
                    tail=newnode;
                }
                else{
                    tail->next=newnode;
                    tail=tail->next;
                }
            }
            if(c==a){
                while(temp2!=NULL){
                    ListNode* newnode=new ListNode(temp2->val);
                    if(res==NULL){
                        res=newnode;
                        tail=newnode;
                    }
                    else{
                        tail->next=newnode;
                        tail=tail->next;
                    }
                    temp2=temp2->next;
                }
                
            }
            if(c>=b+1){
                ListNode* newnode=new ListNode(temp1->val);
                if(res==NULL){
                    res=newnode;
                    tail=newnode;
                }
                else{
                    tail->next=newnode;
                    tail=tail->next;
                }
            }
            c++;
            temp1=temp1->next;
        }
        return res;
    }
};