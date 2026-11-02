#mergeNodesBetweenZeroes

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        //start from first zero
        ListNode* current = head->next;
        //to track
        ListNode* writePtr = head;
        int currentSum = 0;
        while (current != nullptr)
        {
            if (current->val == 0) {
                //reached boundary so merge the current sum
                writePtr->val = currentSum;
                //reset the sum
                currentSum = 0;
                //if there are still nodes left
                if (current->next != nullptr) {
                    writePtr = writePtr->next;
                }
                //if that's the last node then terminate
                else {
                    writePtr->next = nullptr;
                }    
            }
            //add values between the zeroes
            else 
            {
                currentSum += current->val;
            }
            //move to next node
            current = current->next;
        }
        return head;
    }
};