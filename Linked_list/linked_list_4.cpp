#include<bits/stdc++.h>

using namespace std;

// find the middle of the linked list by normal iteration and by tortoise algo  

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
};

void insertAtHead(Node* &head , Node* &tail , int data){

        Node* newNode = new Node(data);

        if(head == NULL){
            head = newNode;
            tail = newNode;
        }

        else{
            newNode->Next = head;
            head = newNode;
        }
}

int lengthOfLL(Node* &head){
    
    int countNodes = 0;
    if(head == NULL){
        return countNodes;
    }

    else {
        Node* temp = head;
        while( temp != NULL){
            countNodes++;
            temp = temp->Next;
            
        }

        return countNodes;
    }
}

int MiddleOfLL(Node* &head){
    
    int nodeNum = lengthOfLL(head)/2 + 1;

    Node* temp = head;
    
    if(head == NULL){
        return head->data;
    }

    else{
         
        while(nodeNum != 1){
            nodeNum--;
            temp = temp->Next;
        }

        return temp->data;
    }
}

int tortoiseAlgo(Node* &head){

    Node* slow = head;
    Node* fast = head;
    
     while(fast != NULL){

        fast = fast->Next;

        if(fast != NULL){
            fast = fast->Next;
            slow = slow->Next;
        }
    }

    return slow->data;
}

void printLL(Node* head){
    Node* temp = head;

    if(head == NULL){
        cout<<temp->data<<"->"<<endl;
    }

    else{
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->Next;
        }
    }
}

int main(){
    
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head , tail , 50);
    insertAtHead(head , tail , 40);
    insertAtHead(head , tail , 30);
    insertAtHead(head , tail , 20);
    insertAtHead(head , tail , 10);

    printLL(head);
    cout<<endl;

    cout<<"Middle node data of the given linked list is : "<<MiddleOfLL(head)<<endl;

    insertAtHead(head , tail , 5);
    insertAtHead(head , tail , 2);
    insertAtHead(head , tail , 0);
    printLL(head);
    cout<<endl;

    cout<<"Middle node data of the given linked list By tortoise algorithm is : "<<tortoiseAlgo(head)<<endl;

    return 0;
    
}