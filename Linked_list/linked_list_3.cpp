#include<bits/stdc++.h>

// reverse the list 

using namespace std;

class Node{

    public:
        int data;
        Node* Next;
        
        Node(){
            this->Next = NULL;
        }

        Node(int data){
            this->data = data;
            this->Next = NULL;
        }

};

void printLL(Node* head);

void InsertAtHead(Node* &head , Node* &tail , int data){
       
       
       if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;

       }
       else{

          Node* newNode = new Node(data);

          newNode->Next = head;

          head = newNode;
       }
}

// by iteration method
void reverseLL(Node* &head , Node* &tail){

    Node* prev = NULL;
    Node* curr = head;

    if( head == NULL){
        printLL(head);
    }

    else{

        while(curr != NULL){
            Node* newNode = new Node();
            newNode = curr->Next;
            curr->Next = prev;
            prev = curr;
            curr = newNode;
            head = prev;
        }
    }
}

// // by recursion method 

// void recursionReverse(Node* &head , Node* &tail){

//     Node* prev = NULL;
//     Node* curr = head;

//     if(curr == NULL){
//         return;
//     }

//     Node* newNode = curr->Next;
//     curr->Next = prev;
//     prev = curr;
//     curr = newNode;

//     return recursionReverse(prev , curr);

// }

int returnHead(Node* &head , Node* &tail){

     return head->data;

}

int returnTail(Node* head , Node* tail){

     Node* temp = head;

     if(head == NULL){
        return tail->data;
     }

     else {

        while(temp->Next != NULL){

            temp = temp->Next;
            tail = temp;

        }

        return tail->data;
     }

}
void printLL(Node* head){

    Node* temp = head;
    
    if(head == NULL){
        cout<<temp->data<<"->"<<endl;
    }

    else {
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->Next;
        }
    }
}

int main(){
    
    Node*head = NULL;
    Node*tail = NULL;

    InsertAtHead(head , tail , 50);
    InsertAtHead(head , tail , 40);
    InsertAtHead(head , tail , 30);
    InsertAtHead(head , tail , 20);
    InsertAtHead(head , tail , 10);
    
    cout<<"given linked list is : ";
    printLL(head);

    cout<<endl
    <<"After reversing linked list is : ";
    reverseLL(head , tail);

    printLL(head);
    cout<<endl;

    cout<<"head of the linked list is : "<<returnHead(head , tail)<<endl
    <<"tail of the linked list is : "<<returnTail(head , tail);

    cout<<endl
    <<"After reversing linked list is : ";
    reverseLL(head , tail);

    printLL(head);
    cout<<endl;

    cout<<"head of the linked list is : "<<returnHead(head , tail)<<endl
    <<"tail of the linked list is : "<<returnTail(head , tail);
    
    // cout<<endl
    // <<"After reversing by recursion linked list is : ";
    // recursionReverse(head , tail);

    // printLL(head);
    // cout<<endl;

    // cout<<"head of the linked list is : "<<returnHead(head , tail)<<endl
    // <<"tail of the linked list is : "<<returnTail(head , tail);

    return 0;
}