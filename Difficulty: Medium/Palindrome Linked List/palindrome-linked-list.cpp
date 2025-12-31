class Solution {
  public:
    bool isPalindrome(Node *head) {
        if (!head || !head->next) return true;

        // find middle
        Node *slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // reverse second half
        Node *prev = NULL;
        while (slow) {
            Node *nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }

        // compare both halves
        Node *first = head;
        Node *second = prev;
        while (second) {
            if (first->data != second->data)
                return false;
            first = first->next;
            second = second->next;
        }

        return true;
    }
};
