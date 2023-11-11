#include<bits/stdc++.h>

using namespace std;

// Doubley linked list { CONGRATES NOW YOU UNDERSTAND THE WHOLE CONCPET OF LL}

class Node{
    public:
        int data; 
        Node* Next;
        Node* prev;

        Node(){
            this->Next = NULL;
            this->prev = NULL;
        }
        Node(int data){
            this->data = data;
            this->Next = NULL;
            this->prev = NULL;
        }

        ~Node(){
            cout<<"Destructor called for : "<<data<<endl;
        }

};

int lengthOfLL(Node *head){

    Node *temp = head;
    int countLength = 0;
    if(temp == NULL){
        return countLength;
    }

    else{
        while(temp != NULL){
            countLength++;
            temp = temp->Next;
        }
        return countLength;
    } 
}

void insertAtHead(Node* &head , Node* &tail , int data){

    if(head == NULL){

        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;

    }

    else{
        
        Node* newNode = new Node(data);
 
        head->prev = newNode;
        newNode->Next = head;
        head = newNode;

    }
}

void insertAtRandom(Node * &head , Node* &tail , int data , int position){
      
    int length = lengthOfLL(head);

    if(position < 0 || position > length+1){
        cout<<"Invalid position : "<<position<<endl
        <<"position should be in the range of [0 , "<<length+1<<"]"<<endl;
        return;
    }

    if(position == 0){
        Node* newNode = new Node(data);

        head->prev = newNode;
        newNode->Next = head;
        head = newNode;
    }

    else if(position == length+1){
        Node* newNode = new Node(data);

        tail->Next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    else{
        
        Node* temp = head;
        Node* previous = head;

        while(position != 1){
             position --;
             previous = temp;
             temp = temp->Next;
        }
        
        Node* newNode = new Node(data);
        previous->Next = newNode;
        temp->prev = newNode;
        newNode->Next = temp;
        newNode->prev = previous;

    }
}

void insertAtTail(Node* &head , Node* &tail , int data ){

    Node* temp = head;

    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        while(temp != NULL){
             temp = temp-> Next ;
        }
        Node* newNode = new Node(data);
            tail->Next = newNode;
            newNode->prev = tail;
            tail = newNode;
    }
}

void deleteNode(Node* &head , Node* &tail , int position){
     
     int length = lengthOfLL(head);

     if( position < 0 || position > length){
        cout<<"Invalid psotion , position : "<<position<<" doesnt exist"<<endl
        <<"position should be in the range  of [0 , "<<length<<"]"<<endl;
        return;
     }

     if(position == 0){

        Node* temp = head;

        head = head->Next;
        temp->Next = NULL;
        head->prev = NULL;

        delete temp; 
    
     }

    else if(position == length){

        Node* temp = head;
        Node* previous = head;

        while( temp->Next != NULL){
            previous = temp;
            temp = temp->Next;
        }

        previous->Next = NULL;
        temp->prev = NULL;
        // tail = previous->Next;

        delete temp;

        tail = previous;

     }
     

     else{

        Node* temp = head;
        Node* previuos = head;

        while(position != 1){
            position--;
            previuos = temp;
            temp = temp->Next;
        }

        Node* curr = temp->Next;

        temp->Next = NULL;
        temp->prev = NULL;
        previuos->Next = curr;
        curr->prev = previuos;

        delete temp;
     }

}

void printLL(Node* head){
    
    Node*temp = head;

    if(head == NULL){
          cout<<temp->data<<"->" << endl;
          return;
    }

    else {
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp -> Next;
        }
    }
}

int main(){
     
     Node* head = NULL;
     Node* tail = NULL;

     insertAtHead(head , tail , 10 );
     insertAtHead(head , tail , 20 );
     insertAtHead(head , tail , 30 );
     insertAtHead(head , tail , 40 );
     insertAtHead(head , tail , 50 );
    
   
    printLL(head);
    cout<<endl
    <<"length of the linked list : "<<lengthOfLL(head)<<endl;

     insertAtTail(head , tail , 5);
     insertAtTail(head , tail , 2);

    printLL(head);
    cout<<endl
    <<"length of the linked list : "<<lengthOfLL(head)<<endl;

    insertAtRandom(head , tail , 60 , 0);
    insertAtRandom(head , tail , 0 , 9);

    printLL(head);
    cout<<endl
    <<"length of the linked list : "<<lengthOfLL(head)<<endl;

    insertAtRandom(head , tail , 25 , 5);
    printLL(head);
    cout<<endl
    <<"length of the linked list : "<<lengthOfLL(head)<<endl;

    deleteNode(head , tail , 0);
    printLL(head);
    cout<<endl
    <<"length of the linked list : "<<lengthOfLL(head)<<endl;

    deleteNode(head , tail , 9);
    printLL(head);
    cout<<endl
    <<"length of the linked list : "<<lengthOfLL(head)<<endl;

    deleteNode(head , tail , 5);
    printLL(head);
    cout<<endl
    <<"length of the linked list : "<<lengthOfLL(head)<<endl;


    return 0;
}