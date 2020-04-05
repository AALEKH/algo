// Convert Binary Number in a Linked List to Integer. PS: As used in usual notation i.e; form right to left

class Solution {
public:
    int i = 0, sum = 0;
    int getDecimalValue(ListNode* head) {
        if(head == NULL)
            return 0;
        getDecimalValue(head->next);
        sum = sum + head->val*pow(2, i++);
        return sum;
    }
};
