#insertGCDinLinkedList

class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head->next == nullptr)
        {
            return head;
        }
        ListNode* temp = head;
        while (temp != nullptr && temp->next != nullptr)
        {
            int gcd_value = gcd(temp->val, temp->next->val);
            ListNode* newNode = new ListNode(gcd_value);
            newNode->next = temp->next;
            temp->next = newNode;
            temp = newNode->next;
        }
        return head;
    }
};