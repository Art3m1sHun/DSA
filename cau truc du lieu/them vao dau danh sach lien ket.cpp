 SinglyLinkedListNode* insertNodeAtHead(int _data) {
//###INSERT CODE HERE
    SinglyLinkedListNode* node = new SinglyLinkedListNode(_data);

    if(head == NULL){
        head = node;
        return head;
    }
    node->next = head;
    head = node;
    return head;
     }