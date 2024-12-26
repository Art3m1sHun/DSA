#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        next = NULL;
    }
};

class LinkedList{
public:
    Node* head;

    LinkedList(){
        head = NULL;
    }

    Node* makeNode(int data){
        return new Node(data);
    }

    void insertAtFirst(int data){
        Node* tmp = makeNode(data);
        if(head == NULL){
            head = tmp;
        }else{
            tmp->next = head;
            head = tmp;
        }
    }

    void insertAtLast(int data){
        Node* tmp = makeNode(data);
        if(head == NULL){
            head = tmp;
        }else{
            Node* p = head;
            while(p->next != NULL){
                p = p->next;
            }
            p->next = tmp;
        }
    }

    void printList(){
        Node* p = head;
        while(p != NULL){
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }
};

int main(){
    LinkedList list;
    int mode;
    while(true){
        cin >> mode;
        switch(mode){
            case 1:
            int data;
                cin >> data;
                list.insertAtFirst(data);
        }
    }
    return 0;
}