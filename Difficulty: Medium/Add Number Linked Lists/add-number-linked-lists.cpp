class Solution {
  public:
    
    Node* reverse(Node* head) {
        Node* prev = NULL;
        while (head) {
            Node* nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        }
        return prev;
    }
    
    Node* addTwoLists(Node* head1, Node* head2) {
        // reverse both lists
        head1 = reverse(head1);
        head2 = reverse(head2);
        
        int carry = 0;
        Node* result = NULL;
        Node* tail = NULL;
        
        while (head1 || head2 || carry) {
            int sum = carry;
            if (head1) {
                sum += head1->data;
                head1 = head1->next;
            }
            if (head2) {
                sum += head2->data;
                head2 = head2->next;
            }
            
            carry = sum / 10;
            Node* newNode = new Node(sum % 10);
            
            if (!result) {
                result = tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }
        
        // reverse result to correct order
        result = reverse(result);
        
        // remove leading zeros if any
        while (result && result->data == 0 && result->next) {
            result = result->next;
        }
        
        return result;
    }
};
