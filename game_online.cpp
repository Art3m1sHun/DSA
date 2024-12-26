#include<iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <cstdlib>

using namespace std;

class node{
    public:
        int value;
        node *right;
        node *left;
        int size;
        node(int data){
            value = data;
            right = left = NULL;
            size = 1;
        }
};

class binary_Search_tree{
    public:
    node *root;
    binary_Search_tree(){
        root = NULL;
    }

    pair <bool, int> _double_search(node *&node, int x){
    if(node == 0){
        return {false , 0};
    }
    int so_gia_tri_nho_hon_root_value = node->left == 0 ? 0 : node->left->size;
    if(node->value == x){
        return{true, so_gia_tri_nho_hon_root_value};
    }
    if(x < node->value){
        return _double_search(node->left, x);
    }
    if(node->value < x){
        auto kq = _double_search(node->right, x);
        return {kq.first, kq.second + so_gia_tri_nho_hon_root_value + 1};
    }
}
    void insert(node*& root, int data) {
        if (root == NULL) {
            root = new node(data);
        } else if (data < root->value) {
            insert(root->left, data);
        } else {
            insert(root->right, data);
        }
    }

    void nlr(node* root) {
        if (root != NULL) {
            cout << root->value << endl;
            nlr(root->left);
            nlr(root->right);
        }
    }
};

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    binary_Search_tree tree;
    int a,b;

    while (true){
        cin >> a >> b;
        if(a == 1){
            tree.insert(tree.root, b);
        }else if(a == 2){
            auto result = tree._double_search(tree.root, b);
            if(result.first){
                cout << result.second << "\n";
            }
        }else{
            break;
        }
    }
    return 0;
}

