#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node * next;

        Node() {
            this->data = 0;
            this->next = NULL;
        }

        Node(int data)  {
            this->data = data;
            this->next = NULL;
        }

        ~Node() {
            int value = this->data;
            if(this->next != NULL) {
                delete next;
                this->next = NULL;
            }
            cout<<"memory is freed for the value "<<value<<endl;
        }
};

void insertAtHead(Node * &head, int a) {
    Node * temp = new Node(a);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int a) {
    Node * temp = new Node(a);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int a) {
    Node *New = new Node(a);
    Node *temp = head;
    int count = 1;

    while(count < position -1) {
        temp = temp -> next;
        count++;
    }

    if(position == 1) {
        New->next= head;
        head = New;
        return;
    }

    if(temp->next == NULL) {
        tail->next = New;
        tail = New;
        return;
    }

    New->next = temp->next;
    temp->next = New;

}

void deleteNodeByPosition(Node * &head, int position) {
    if(position == 1) {
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }else {
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;
        while(count < position) {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }


}

void print(Node * &head) {
    Node * temp = head;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main (){

    Node *node1 = new Node(1);

    Node *head = node1;
    Node *tail = node1;

    insertAtTail(tail, 2);
    print(head);
    insertAtTail(tail, 6);
    // insertAtHead(n1, 2);
    print(head);

    insertAtPosition(tail, head, 2, 19);
    print(head);

    deleteNodeByPosition(head, 2);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data;
    
    
    return 0;
}