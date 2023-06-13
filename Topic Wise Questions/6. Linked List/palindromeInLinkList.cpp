/***
* URL: https://www.codingninjas.com/codestudio/problems/palindrome-linked-list_8230717?challengeSlug=striver-sde-challenge&leftPanelTab=1
*/

#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverse(LinkedListNode<int> *ptr) {
    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* next = NULL;
    while(ptr != NULL) {
        next = ptr->next;
        ptr->next = prev;
        prev = ptr;
        ptr = next;
    }
    return prev;
}

bool isPalindrome(LinkedListNode<int> *head) {
    if(head == NULL||head->next == NULL) return true;
        LinkedListNode<int> *slow = head;
        LinkedListNode<int> *fast = head;
        LinkedListNode<int> *temp = head;
        while(fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = reverse(slow->next);
        slow = slow->next;
        while(slow != NULL) {
            if(slow->data == temp->data) {
                slow = slow->next;
                temp = temp->next;
            }
            else return false;
        }
        return true;
}