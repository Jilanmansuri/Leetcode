class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        next = NULL;
    }
};

class MyLinkedList {
public:
    Node* head;
    int size;

    MyLinkedList() {
        head = NULL;
        size = 0;
    }

    int get(int index) {

        if(index < 0 || index >= size)
            return -1;

        Node* temp = head;

        for(int i = 0; i < index; i++)
            temp = temp->next;

        return temp->val;
    }

    void addAtHead(int val) {

        Node* newNode = new Node(val);

        newNode->next = head;

        head = newNode;

        size++;
    }

    void addAtTail(int val) {

        Node* newNode = new Node(val);

        if(head == NULL){
            head = newNode;
            size++;
            return;
        }

        Node* temp = head;

        while(temp->next)
            temp = temp->next;

        temp->next = newNode;

        size++;
    }

    void addAtIndex(int index, int val) {

        if(index < 0 || index > size)
            return;

        if(index == 0){
            addAtHead(val);
            return;
        }

        if(index == size){
            addAtTail(val);
            return;
        }

        Node* prev = head;

        for(int i = 0; i < index-1; i++)
            prev = prev->next;

        Node* newNode = new Node(val);

        newNode->next = prev->next;

        prev->next = newNode;

        size++;
    }

    void deleteAtIndex(int index) {

        if(index < 0 || index >= size)
            return;

        if(index == 0){

            Node* del = head;

            head = head->next;

            delete del;

            size--;

            return;
        }

        Node* prev = head;

        for(int i = 0; i < index-1; i++)
            prev = prev->next;

        Node* del = prev->next;

        prev->next = del->next;

        delete del;

        size--;
    }
};