#include <iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
//  constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<" memory is free for node with data "<<value<<endl;
    }

};

bool detectLoop(Node* head){
     if(head == NULL)
        return true;
    
    map<Node* , bool> visited;
    Node* temp = head;
    while(temp!=NULL){
        if(visited[temp] == true){
            return 1;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return 0;
}

void insertNode(Node* &tail,int element,int d){
    // assumong that the element is present in the list
    // empty list
    if(tail == NULL){
        Node* newnode = new Node(d);
        tail = newnode;
        newnode->next = newnode;
    }
    // non empty list
    else{
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }

        // element is found current is representing elemnt wala node

        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;


    }
}

void print(Node* tail){
    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    } while(tail != temp);
    cout<<endl;


}

void deleteNode(Node* &tail, int value){

    // empty list
    if(tail == NULL){
        cout<<"list is empty BC"<<endl;
        return ;
    }
    else{
        // assuming element is in the list
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr->data != value){
            prev  = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
   

}


int main(){
    Node* tail = NULL;
// empty list mai insert krna hai
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,7,9);
    print(tail);

    insertNode(tail,5,6);
    print(tail);

    insertNode(tail,9,10);
    print(tail);

    insertNode(tail,3,4);
    print(tail);

    // deleteNode(tail,6);
    // print(tail);

    cout<<detectLoop(tail);

}