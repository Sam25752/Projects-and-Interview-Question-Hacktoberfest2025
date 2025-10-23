class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummynode=new ListNode(-1);
        ListNode* temp=dummynode;
        int carry=0;
        while( (l1!=NULL || l2!=NULL) || carry!=0 ){
            int sum=0;
            if(l1!=NULL){
                sum=sum+l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum=sum+l2->val;
                l2=l2->next;
            }

            sum=sum+carry;
            carry=sum/10;
            ListNode* newnode=new ListNode(sum%10);
            temp->next=newnode;
            temp=temp->next;
        }
        return dummynode->next;
    }
};
