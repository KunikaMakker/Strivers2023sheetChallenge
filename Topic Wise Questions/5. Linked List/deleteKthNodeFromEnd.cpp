/***
    URL: https://www.codingninjas.com/codestudio/problems/delete-kth-node-from-end_8230725?challengeSlug=striver-sde-challenge&leftPanelTab=1
*/

/*
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
*/

Node* removeKthNode(Node* head, int K)
{
    Node *ptr=head; int count = 0, cur=1;
    while(ptr!=NULL) {
        count++;
        ptr=ptr->next;
    }
    if(count == 1) {
        head = NULL; return head;
    }
    if(count-K == 0) {
        head = head -> next ;
        return head;
    }
    ptr=head;
    while(cur < count-K && ptr->next!= NULL) {
        ptr = ptr->next;
        cur++;
    }
    if(ptr->next == NULL) {
        ptr = NULL;
    }
    else {
        ptr->next = ptr->next->next;
    }
    return head;
}
