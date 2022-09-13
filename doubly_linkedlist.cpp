#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memomry free"<<endl;
    }
};

void InsertAtHead(Node *&head, int data)
{

    // empty lis
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp->next;
        head = temp;
    }
}

void InsertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void InsertAtPosition(Node *&head, int position, int data)
{
    if (position == 1)
    {
        InsertAtHead(head, data);
        return;
    }

    int cnt = 1;
    Node *pre = head;
    Node *temp = new Node(data);
    while (cnt != position - 1)
    {
        pre = pre->next;
        cnt++;
    }
    if (pre->next == NULL)
    {
        InsertAtTail(head, data);
        return;
    }
    else
    {
        Node *aft = pre->next;
        pre->next = temp;
        temp->next = aft;
        aft->prev = temp;
        temp->prev = pre;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void deleteNode(int position,Node* &head){

    if(position == 1){
    //    deleting first or last node
       Node* temp = head;
       temp->next->prev = NULL;
       head = temp->next;
       temp->next = NULL;

       
       delete temp;

    }

   else{
    int cnt = 1;
    Node* temp = head;
    while(cnt != position -1){
          temp = temp->next;
          cnt++;
    }
    Node* current = temp->next;
    current->prev = NULL;
    temp->next = current->next;
    current->next = NULL;
    delete current;
   }
}


int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    print(head);
    cout << getLength(head) << endl;

    InsertAtHead(head, 11);
    print(head);

    InsertAtHead(head, 13);
    print(head);

    InsertAtHead(head, 8);
    print(head);

    Node *tail = node1;
    InsertAtTail(tail, 34);
    print(head);

    InsertAtPosition(head, 5, 21);
    print(head);

    deleteNode(2,head);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    return 0;
}