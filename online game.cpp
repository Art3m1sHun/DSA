#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    int count;

    Node(int val) : data(val), left(nullptr), right(nullptr), count(1) {}
};

Node* insert(Node* root, int val) {
    if (root == nullptr) {
        return new Node(val);
    }

    if (val < root->data) {
        root->left = insert(root->left, val);
    } else if (val > root->data) {
        root->right = insert(root->right, val);
    } 

    root->count = 1;
    if (root->left) root->count += root->left->count;
    if (root->right) root->count += root->right->count;
    return root;
}

Node* remove(Node* root, int val) {
    if (root == nullptr) return root;

    if (val < root->data)
        root->left = remove(root->left, val);
    else if (val > root->data)
        root->right = remove(root->right, val);
    else {
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = root->right;
        while (temp->left != nullptr)
            temp = temp->left;

        root->data = temp->data;
        root->right = remove(root->right, temp->data);
    }
    if(root){
        root->count = 1;
        if (root->left) root->count += root->left->count;
        if (root->right) root->count += root->right->count;
    }
    return root;
}

int countLessThan(Node* root, int val) {
    if (root == nullptr) {
        return 0;
    }

    if (val <= root->data) {
        return countLessThan(root->left, val);
    } else {
        int count = 1; 
        if(root->left) count += root->left->count;
        return count + countLessThan(root->right, val);
    }
}

bool find(Node* root, int val){
    if(root == nullptr) return false;
    if(root->data == val) return true;
    if(val < root->data) return find(root->left, val);
    return find(root->right, val);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Node* root = nullptr;
    int a, b;

    while (cin >> a) {
        if (a == 0) break;
        cin >> b;

        if (a == 1) {
            root = insert(root, b);
        } else if (a == 3) {
            root = remove(root, b);
        } else if (a == 2) {
            if (find(root, b)) {
                cout << countLessThan(root, b) + 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        }
    }
    return 0;
}