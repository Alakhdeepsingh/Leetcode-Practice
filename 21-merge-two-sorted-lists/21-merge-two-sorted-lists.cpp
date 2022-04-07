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
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//         ListNode* temp1=l1;
//         ListNode* temp2=l2;
//         while((temp1!=NULL || temp1->next!=NULL) && (temp2!=NULL || temp2->next!=NULL)){
//             if(temp1->val==temp2->val){
//                 temp1->next=temp2->next;
//                 temp1=temp1->next;                
//             }
//             else if(temp2->val>temp1->val){
                
//                 temp1=temp1->next;
//             }
//             else{
                
//                 temp2=temp2->next;
//             }
//         }
//     }
// };
class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		if(l1 == NULL){
			return l2;
		}
		if(l2 == NULL){
			return l1;
		}
		ListNode* newHead = NULL;
		ListNode* newTail = NULL;
		if(l1->val < l2->val){
			newHead = l1;
			newTail = l1;
			l1 = l1->next;
		}
		else{
			newHead = l2;
			newTail = l2;
			l2 = l2->next;
		}
		while(l1 != NULL and l2 != NULL){
			if(l1->val < l2->val){
				newTail->next = l1;
				newTail = newTail->next;
				l1 = l1->next;
			}
			else{
				newTail->next = l2;
				newTail = newTail->next;
				l2 = l2->next;
			}
		}
		if(l1 != NULL){
			newTail->next = l1;
			l1 = l1->next;
		}
		if(l2 != NULL){
			newTail->next = l2;
		}
		return newHead;
	}
};