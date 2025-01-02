
#include <iostream>
#include <stdexcept>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    Node* makeNode(int data) {
        return new Node(data);
    }

    void insertAtFirst(int data) {
        Node* tmp = makeNode(data);
        if (head == nullptr) {
            head = tmp;
        } else {
            tmp->next = head;
            head = tmp;
        }
    }

    void insertAtLast(int data) {
        Node* tmp = makeNode(data);
        if (head == nullptr) {
            head = tmp;
        } else {
            Node* p = head;
            while (p->next != nullptr) {
                p = p->next;
            }
            p->next = tmp;
        }
    }

    void insertAtMiddle(int data, int pos) {
        if (pos < 1) {
            return;
        }
        Node* tmp = makeNode(data);
        if (head == nullptr) {
            head = tmp;
        } else if (pos == 1) {
            insertAtFirst(data);
        } else {
            Node* p = head;
            for (int i = 1; i < pos - 1; ++i) {
                if (p->next == nullptr) {
                    break;
                }
                p = p->next;
            }
            if (p->next == nullptr) {
                p->next = tmp;
            } else {
                tmp->next = p->next;
                p->next = tmp;
            }
        }
    }

    void printList() const {
        Node* p = head;
        while (p != nullptr) {
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }

    void length() const {
        Node* p = head;
        int len = 0;
        while (p != nullptr) {
            len++;
            p = p->next;
        }
        cout << len << endl;
    }

    void search(LinkedList list, int data) {
        Node* p = list.head;
        while (p != nullptr) {
            if (p->data == data) {
                cout << "Found" << endl;
                return;
            }
            p = p->next;
        }
        cout << "Not found" << endl;
    }

    void deleteAtFirst() {
        if (head == nullptr) {
            return;
        } else {
            Node* tmp = head;
            head = head->next;
            delete tmp;
        }
    }

    void deleteAtMiddle(int pos) {
        if (head == nullptr) {
            return;
        }
        if (pos < 1) {
            return;
        }
        if (pos == 1) {
            deleteAtFirst();
        } else {
            Node* p = head;
            for (int i = 1; i < pos - 1; ++i) {
                if (p->next == nullptr) {
                    break;
                }
                p = p->next;
            }
            if (p->next == nullptr) {
                return;
            } else {
                Node* tmp = p->next;
                p->next = p->next->next;
                delete tmp;
            }
        }
    }

    void deleteAtLast() {
        if (head == nullptr) {
            return;
        } else if (head->next == nullptr) {
            delete head;
            head = nullptr;
        } else {
            Node* p = head;
            while (p->next->next != nullptr) {
                p = p->next;
            }
            delete p->next;
            p->next = nullptr;
        }
    }
};


void deletenode(LinkedList list, int data) {
    Node* p = list.head;
    Node* prev = nullptr;
    while (p != nullptr) {
        if (p->data == data) {
            if (prev == nullptr) {
                list.head = p->next;
            } else {
                prev->next = p->next;
            }
            delete p;
            return;
        }
        prev = p;
        p = p->next;
    }
}

int main() {
    LinkedList list;
    int mode;
    while (true) {
        cout << "-----------------------------------------" << endl;
        cout << "1. Insert at first" << endl;
        cout << "2. Insert at last" << endl;
        cout << "3. Delete at first" << endl;
        cout << "4. Delete at last" << endl;
        cout << "5. Print list" << endl;
        cout << "6. Insert at middle" << endl;
        cout << "7. Delete at middle" << endl;
        cout << "8. Exit" << endl;
        cout << "-----------------------------------------" << endl;
        cin >> mode;
        try {
            switch (mode) {
                case 1: {
                    int data;
                    cin >> data;
                    list.insertAtFirst(data);
                    break;
                }
                case 2: {
                    int data;
                    cin >> data;
                    list.insertAtLast(data);
                    break;
                }
                case 3:
                    list.deleteAtFirst();
                    break;
                case 4:
                    list.deleteAtLast();
                    break;
                case 5:
                    list.printList();
                    break;
                case 6: {
                    int data, pos;
                    cin >> data >> pos;
                    list.insertAtMiddle(data, pos);
                    break;
                }
                case 7: {
                    int pos;
                    cin >> pos;
                    list.deleteAtMiddle(pos);
                    break;
                }
                case 8:
                    return 0;
                default:
                    cout << "Invalid choice" << endl;
            }
        } catch (const exception& e) {
            cerr << e.what() << endl;
        }
    }
    return 0;
}
