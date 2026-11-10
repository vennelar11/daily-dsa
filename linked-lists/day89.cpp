#convertBinaryNumber

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int num = 0;
        while (temp != nullptr)
        {
            num = num * 2 + temp->val;
            temp = temp->next;
        }
        return num;
    }
};