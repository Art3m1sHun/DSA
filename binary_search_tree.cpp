#include <iostream>

using namespace std;

class Node {
public:
    char data;
    Node* left, *right;

    Node(char d) {
        data = d;
        left = right = nullptr;
    }
};

class BinarySearchTree {
public:
    Node* root;

    BinarySearchTree() {
        root = nullptr;
    }

    void insert(Node*& root, char data) {
        if (root == nullptr) {
            root = new Node(data);
        } else if (data < root->data) {
            insert(root->left, data);
        } else {
            insert(root->right, data);
        }
    }

    void preOrder(Node* root) {
        if (root != nullptr) {
            cout << root->data << endl;
            preOrder(root->left);
            preOrder(root->right);
        }
    }

    void inOrder(Node* root) {
        if (root != nullptr) {
            inOrder(root->left);
            cout << root->data << endl;
            inOrder(root->right);
        }
    }

    void postOrder(Node* root) {
        if (root != nullptr) {
            postOrder(root->left);
            postOrder(root->right);
            cout << root->data << endl;
        }
    }

    Node* findData(Node* tree, char data) {
        if (tree == nullptr) {
            return nullptr;
        } else {
            if (tree->data < data) {
                return findData(tree->right, data);
            } else if (data < tree->data) {
                return findData(tree->left, data);
            } else {
                return tree;
            }
        }
    }

    void replaceNode(Node*& tree, Node*& tree1) {
        if (tree1->left != nullptr) {
            replaceNode(tree, tree1->left);
        } else if (tree1->right != nullptr) {
            tree->data = tree1->data;
            tree = tree1;
            tree1 = tree1->right;
        }
    }

    void deleteNode(Node*& tree, char data) {
        if (tree == nullptr) {
            return;
        } else {
            if (data < tree->data) {
                deleteNode(tree->left, data);
            } else if (tree->data < data) {
                deleteNode(tree->right, data);
            } else {
                Node* x = tree;
                if (tree->left == nullptr) {
                    tree = tree->right;
                } else if (tree->right == nullptr) {
                    tree = tree->left;
                } else {
                    Node* y = tree->right;
                    replaceNode(x, y);
                }
                delete x;
            }
        }
    }
};

int main() {
    while (true) {
        BinarySearchTree tree;
        char t, data;
        cin >> t;
        while (t--) {
            cin >> data;
            tree.insert(tree.root, data);
        }
        cout << "Pre-order traversal: " << endl;
        tree.preOrder(tree.root);
        cout << "In-order traversal: " << endl;
        tree.inOrder(tree.root);
        cout << "Post-order traversal: " << endl;
        tree.postOrder(tree.root);
    }
    return 0;
}
