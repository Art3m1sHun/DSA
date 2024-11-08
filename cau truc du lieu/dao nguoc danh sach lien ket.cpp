/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
std
###End banned keyword*/

#include <iostream>
#include <limits>
using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }
    
};




// Complete the insertSortedLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

//###INSERT CODE HERE -
void insert_node(SinglyLinkedList *list, int value) {
    SinglyLinkedListNode* tmp = new SinglyLinkedListNode(value);
    tmp->data = value;      
    tmp->next = NULL;       

    if(list->head == NULL) { 
        list->head = tmp;
        list->tail = tmp;
    } else { 
        list->tail->next = tmp; 
        list->tail = tmp;       
    }
}
// Print linked list
void printLinkedList(SinglyLinkedList *list){
    SinglyLinkedListNode* current = list->head;
    while(current != nullptr){
        cout << current->data << " ";
        current = current->next;
    }
}

// Reverse linked list
void reverseLinkedList(SinglyLinkedList *list) {
    SinglyLinkedListNode* prev = nullptr; 
    SinglyLinkedListNode* current = list->head;  
    SinglyLinkedListNode* next = nullptr; 
    while (current != nullptr) {
        next = current->next; 
        current->next = prev; 
        prev = current;  
        current = next;  
    }
    list->head = prev; 
}
int main()
{
    while(1){
    SinglyLinkedList* llist = new SinglyLinkedList();
    int llist_count;


    cin >> llist_count;

    for (int i = 0; i < llist_count; i++) {
        int llist_item;
        cout <<"Nhap gia tri o so " << i << endl;
        cin >> llist_item;

        insert_node(llist,llist_item);
    }
    
    
    reverseLinkedList(llist);
    printLinkedList(llist);
    }
    return 0;
}