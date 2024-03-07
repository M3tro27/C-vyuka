#include <iostream>

using namespace std;


struct Node
{
	int val;
	Node* next;

    //vytiskne jeden prvek
    void print_node();
    //vytiskne prvek a všechny navazující
    void print_LL();
    //pridá na konec listu jeden prvek
    void push_back_val(int val);
    //na daný index vloží prvek a všechny ostatní posune
    void insert_val(int idx, int val);
    //vrátí pointer na prvek, který se nachází na daném indexu
    Node* operator[](int index);
    //odstraní prvek na daném indexu
    void delete_node(int idx);

};

void Node::print_node() {
    std::cout << "Data: " << val << " Link: " << next << endl;

}

void Node::print_LL() {
    Node *temp = this;
    while (temp != nullptr) {
        std::cout << "Data: " << temp->val << " Link: " << temp->next << endl;
        temp = temp->next;
    }
}

void Node::push_back_val(int val) {
    Node *NewNode = new Node;

    NewNode->val = val;
    NewNode->next = nullptr;

    Node *temp = this;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = NewNode;
}

void Node::insert_val(int idx, int val) {
    Node *NewNode = new Node;
    NewNode->val = val;

    Node *temp = this;
    int i = 0;
    while (temp->next != nullptr) {
        if (i == idx - 1) {
            NewNode->next = temp->next;
            temp->next = NewNode;
            return;
        }
        temp = temp->next;
        i++;
    }

}

Node *Node::operator[](int index) {
    Node* temp = this;
    int i = 0;

    while (temp->next != nullptr && i != index - 1) {
        temp = temp->next;
        i++;
    }
    return temp->next;
}

void Node::delete_node(int idx) {
    if (idx == 0) {
        Node* nextNode = this->next;
        this->val = nextNode->val;
        this->next = nextNode->next;
        delete nextNode;
    }

    Node* temp = this;
    int i = 0;
    while (temp->next != nullptr) {
        if (i == idx - 1) {
            Node *del = temp->next;
            temp->next = del->next;
            delete del;
            return;
        }
        temp = temp->next;
        i++;
    }
}


int main()
{
    Node LL;
    LL.val = 0;
    LL.next = nullptr;

    LL.push_back_val(1);
    LL.push_back_val(2);
    LL.push_back_val(3);

    LL.print_LL();
    LL[1]->print_node();

    LL.insert_val(2,4);
    std::cout << endl;
    LL.delete_node(0);
    LL.print_LL();
}
