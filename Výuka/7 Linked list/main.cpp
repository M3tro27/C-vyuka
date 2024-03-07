#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};


class LinkedList{
    Node* head;
public:
    LinkedList() {head = nullptr;}

    void push_back(int data);
    void print_list();
    void print_node(int index);
    void insert_node(int data, int index);
    Node* operator[](int index);
    void del_node(int index);
};

int main(){
    LinkedList list;

    list.push_back(1);
    list.print_list();

    list.push_back(2);
    list.print_list();
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);

    list.print_node(2);
    list.insert_node(6, 2);
    list.print_node(2);
    list.print_list();
    cout << endl;
    
    cout << "Operator [3]: " << list[3] << endl;
    cout << endl;

    list.print_list();
    cout << endl;
    list.del_node(2);
    cout << endl;
    list.print_list();



    return 0;
}

void LinkedList::push_back(int data) {
    Node* newNode = new Node(data);
    if (head == nullptr){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
}

void LinkedList::print_list() {
    Node* temp = head;

    while (temp != nullptr){
        cout << "Data: " << temp->data << " Link: " << temp->next << endl;
        temp = temp->next;
    }
}

void LinkedList::print_node(int index) {
    Node* temp = head;
    int i = 0;
    while (temp != nullptr and i != index) {
        temp = temp->next;
        i++;
    }
    cout << "Index: " << index << " Data: " << temp->data << " Link: " << temp->next << endl;
}

void LinkedList::insert_node(int data, int index) {
    Node* newNode = new Node(data);
    int i = 0;
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        if (i == index - 1){
            newNode->next = temp->next;
            temp->next = newNode;
            return;
        }
        temp = temp->next;
        i++;
    }
}

Node *LinkedList::operator[](int index) {
    Node* temp = head;
    int i = 0;
    while (temp->next != nullptr and i != index - 1) {
        temp = temp->next;
        i++;
    }
    return temp->next;
}

void LinkedList::del_node(int index) {
    Node* temp = head;
    int i = 0;
    if (index == 0) {
        Node* next = temp->next;
        head = next;
        delete temp;
        return;
    }
    while (temp->next != nullptr) {
        if (i == index - 1){
            Node* del = temp->next;
            temp->next = del->next;
            delete del;
            return;
        }
        temp = temp->next;
        i++;
    }
}
