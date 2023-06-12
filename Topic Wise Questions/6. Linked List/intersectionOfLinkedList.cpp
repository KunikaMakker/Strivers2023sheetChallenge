/***
    URL: `https://www.codingninjas.com/codestudio/problems/630457?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0`
*/
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };

*****************************************************************/

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    Node *temp1 = firstHead;
    Node *temp2 = secondHead;

    while(temp1 != temp2) {
        temp1 = temp1 == NULL ? secondHead : temp1->next;
        temp2 = temp2 == NULL ? firstHead : temp2->next;
    }

    return temp1;
}