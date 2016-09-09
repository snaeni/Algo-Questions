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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *t1,*t2,*t3 = NULL;
        ListNode *result = NULL;
        t1 = l1;
        t2 = l2;
        int sum = 0; 
        int carry =0;
        while(t1!=NULL || t2!=NULL)
        {
            if(t1==NULL)
            {
                sum = t2->val+carry;
                t2=t2->next;
            }
            else if(t2==NULL)
            {
                sum = t1->val+carry;
                t1=t1->next;
            }
            else
            {
                sum = t1->val+t2->val+carry;
                t1=t1->next;
                t2=t2->next;
            }
            carry = sum/10;
            if(t3 == NULL)
                t3 = new ListNode(sum%10);
            else
            {
                t3->next = new ListNode(sum%10);
                t3= t3->next;
            }
            if(result == NULL)
                result = t3;
        }
        
        if(carry!=0)
        {
            t3->next = new ListNode(1);
        }
        return result;
    }
}; 
