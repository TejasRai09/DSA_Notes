#include <iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    // destructor
    ~Node(){
        int value = this-> data;
        // memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data"<<endl;

    }
};

Node* floydDetectLoop(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;
    while(slow !=NULL && fast!= NULL){
         fast = fast->next;
         if(fast != NULL){
            fast = fast->next;
         }
         slow = slow->next;
         if(slow == fast){
            cout<<"present at "<<slow->data<<endl;
            // slow=head;
            
            // while(slow!=fast){
            // slow = slow->next;
            // fast = fast->next;
            // }
            // cout<<"slow "<<slow->data<<endl;
            // cout<<"fast "<<fast->data<<endl;
            return slow;
         }
         
    }
    return NULL;
}

Node* getStartingNode(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* intersection = floydDetectLoop(head);
    Node* slow = head;
    while(slow != intersection){
        slow =slow->next;
        intersection = intersection->next;
    }
    return slow;
}


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



void InsertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
    
}

void InsertAtPosition(Node* &tail,Node* &head,int position,int d){
    if(position == 1){
        InsertAtHead(head,d);
        return ;
    }
     
    Node* temp = head;
    int cnt = 1;
    
    while(cnt<position - 1){
        temp = temp->next;
        cnt++;
    }
    // inserting at last position
    if(temp->next == NULL){
        InsertAtTail(tail,d);
        return ;
    }

    // creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

   

}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}

void deleteNode(int position,Node* &head){

    if(position == 1){
    //    deleting first or last node
       Node* temp = head;
       head = head->next;
    //    memory free start node
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
    temp->next = current->next;
    current->next = NULL;
    delete current;
   }
}



int main(){

    // ceated a new node
    Node* node1 = new Node(10);
    // node1->set_node(5);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

//    head pointed to node1
    // Node* head = node1;
    Node* tail = node1;
    // print(head);

    // InsertAtHead(head,12);

    // print(head);

    // InsertAtHead(head,15);

    // print(head);




    //  Node* head = node1;
    Node* head = node1;
    print(head);

    InsertAtHead(head,12);
    print(head);

     InsertAtHead(head,15);
    print(head);



    InsertAtPosition(tail,head,4,19);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    // deleteNode(1,head);
    // print(head);

    tail->next = head->next;
    

    // if(detectLoop(head)){
    //     cout<<"cycle is present";
    // }
    
    if(floydDetectLoop(head)!=NULL){
        cout<<"Cycle is present"<<endl;
    }
    else{
        cout<<"No cycle"<<endl;
    }

    cout<<"here is the head of starting loop "<<getStartingNode(head)->data;

}