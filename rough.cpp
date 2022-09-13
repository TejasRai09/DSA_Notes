#include <iostream>
using namespace std;
#include <bits/stdc++.h>

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this-> next = NULL;
    }
};

void insertNode(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;

}

void insertAtPosition(Node* &head,int position,int data){
    int count = 1;
    
    Node* temp = head;
    while(count != position -1 ){
         temp = temp->next;
         count++;
    }

    Node* node3 = new Node(data);
    node3->next = temp->next;
    temp->next = node3;

    

}

void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    insertNode(head,15);
    // print(head);

    Node* tail = node1;
    insertTail(tail,19);
    print(head);
    insertTail(tail,21);
    print(head);

    insertAtPosition(head,3,23);
    print(head);
    

}