/**
    URL: https://www.codingninjas.com/codestudio/problems/add-two-numbers-as-linked-lists_8230833?challengeSlug=striver-sde-challenge&leftPanelTab=1
*/

/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node* dummyHead = new Node(0);
    Node* curr = dummyHead;
    int carry = 0;
    while (num1 != NULL || num2 != NULL || carry != 0) {
        int x = num1 ? num1->data : 0;
        int y = num2 ? num2->data : 0;
        int sum = carry + x + y;
        carry = sum / 10;
        curr->next = new Node(sum % 10);
        curr = curr->next;
        num1 = num1 ? num1->next : nullptr;
        num2 = num2 ? num2->next : nullptr;
    }
    return dummyHead->next;
}
