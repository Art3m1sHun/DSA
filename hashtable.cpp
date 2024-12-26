#include <iostream>
#define hash_size 11
using namespace std;

struct node{
	int value;
	node* next;
};

node* hash_table[hash_size];

int hash_func(int data){
	return data % hash_size;
}

void insert(int data){
	int index = hash_func(data);
	node* temp = new node;
	temp->value = data;
	if(hash_table[index] == NULL){
		hash_table[index] = temp;
		return;
	}
	temp->next = hash_table[index];
	hash_table[index] = temp;
}

int find(int data){
	int index = hash_func(data);
	node* current = hash_table[index];
	while(hash_table[index]){
		if (hash_table[index]->value == data)
			return 1;
	}
	return 0;
}

int main(){
	insert(21);
	insert(13);
	int check = find(0);
	cout << check;
    system("pause");
    return 0;
}
