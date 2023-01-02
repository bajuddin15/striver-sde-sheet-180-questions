class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prevptr = NULL;
        ListNode* currptr = head;
        ListNode* nextptr ;
        while(currptr != NULL){
            nextptr = currptr->next;
            currptr->next = prevptr;
            prevptr = currptr;
            currptr = nextptr;
        }
        return prevptr;
    }
};

// Input: head = [1,2,3,4,5]
// Output: [5,4,3,2,1]
