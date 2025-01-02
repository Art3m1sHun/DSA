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

    void deleteAtFirst(){
        if(head == NULL){
            cout << "List is empty" << endl;
        }else{
            Node* tmp = head;
            head = head->next;
            delete tmp;
        }
    }
    void insertatmiddle(int data, int pos){
        Node *tmp = new Node(data);
        if(head == NULL){
            insertAtFirst(data);
        }else{
            Node *p = head;
            if(pos < 1){
                return;
            }else if(pos == 1){
                insertAtFirst(data);
            }else{
                for(int i = 1; i < pos - 1;i++){
                    if(p->next == NULL){
                        break;
                    }
                    p = p->next;
                }
                if(p->next == NULL){
                    p->next = tmp;
                }else{
                    tmp->next = p->next;
                    p->next = tmp;
                }
            }
        }
    }
    void deleteatmiddle(int pos){
        if(head == NULL){
            return;
        }else{
            Node *p = head;
            if(pos < 1){
                return;
            }else if(pos == 1){
                deleteAtFirst();
            }else{
                for(int i = 1; i < pos - 1;i++){
                    if(p->next == NULL){
                        break;
                    }
                    p = p->next;
                }
                if(p->next == NULL){
                    cout << "Position not found" << endl;
                }else{
                    Node *tmp = p->next;
                    p->next = p->next->next;
                    delete tmp;
                }
            }
        }
	}
    void deleteAtLast(){
        if(head == NULL){
            return;
        }else if(head->next == NULL){
            delete head;
            head = NULL;
        }else{
            Node* p = head;
            while(p->next->next != NULL){
                p = p->next;
            }
            delete p->next;
            p->next = NULL;
        }
    }
};

int main(){
    LinkedList list;
    int mode;
    while(true){
        cout << "1. Insert at first" << endl;
        cout << "2. Insert at last" << endl;
        cout << "3. Delete at first" << endl;
        cout << "4. Delete at last" << endl;
        cout << "5. Print list" << endl;
        cout << "6. Insert at middle" << endl;
        cout << "7. Delete at middle" << endl;
        cout << "8. Exit" << endl;
        cin >> mode;
        switch(mode){
            int data, pos;
            case 1:
                cin >> data;
                list.insertAtFirst(data);
                break;
            case 2:
                cin >> data;
                list.insertAtLast(data);
                break;
            case 3:
                list.deleteAtFirst();
                break;
            case 4:
                list.deleteAtLast();
                break;
            case 5:
                list.printList();
                break;
            case 6:
                cin >> data;
                cin >> pos;
                list.insertatmiddle(data, pos);
            case 7:
                cin >> pos;
                list.deleteatmiddle(pos);
            case 8:
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
