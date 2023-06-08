/***
    URL: https://www.codingninjas.com/codestudio/problems/merge-two-sorted-linked-lists_8230729?challengeSlug=striver-sde-challenge&leftPanelTab=1
*/

#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    Node<int>* sol = NULL;
    if(first == NULL) return second;

    if(second == NULL) return first;

    if(first->data < second->data) {
        sol = first;
        sol->next = sortTwoLists(first->next, second);
    }
    if(first->data >= second->data) {
        sol = second;
        sol->next = sortTwoLists(first, second->next);
    }
    return sol;
}
