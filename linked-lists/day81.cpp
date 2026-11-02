#middleOfTheLinkedList

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int n = countNodes(head);
        int i = 1;
        ListNode* middle = head;
        if (n % 2 != 0)
        {
            while (i <= n / 2)
            {
                middle = middle->next;
                i++;
            }
            return middle;
        }
        while (i <= n / 2)
        {
            middle = middle->next;
            i++;
        }
        return middle;

    }
    int countNodes(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while (temp != nullptr)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
};