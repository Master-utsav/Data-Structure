#ifndef LINKED_LIST
#define LINKED_LIST

#include<iostream>

using namespace std;

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
            this->Next = NULL;
            this->data = data;
            this->prev = NULL;
        }

        void insertAthead(Node* &head , Node* &tail , int data){
            
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

        void PrintLL(Node* head){

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

        int LengthLL(Node* head){
            int countLength = 0 ;
            if ( head == NULL){
                return countLength;
            }

            else{
                Node* temp = head;

                while( temp != NULL){
                    countLength++;
                    temp = temp->Next;
                }

                return countLength;
            }
        }

        void ReverseLL(Node* &head){

            Node* prev = NULL;
            Node* curr = head;

            if(head == NULL){
                return;
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

        Node* midOfLL(Node* &head){

            Node* slow = head;
            Node* fast = head;

            while(fast->Next != NULL){
                 
                 fast = fast->Next;
                 if(fast->Next != NULL){
                    fast = fast->Next;
                    slow = slow->Next;
                 }
                
            }
            return slow;

        }

        void loopRandom(Node* &head , Node* &tail , int position ){

            Node* curr = head;

            if(position <= 0 || position > LengthLL(head)){
                cout<<" Invalid position "<<endl;
                return;
            }
            
            if(head == NULL){
                return;
            }

            else{

            while(position != 1){
                position --;
                curr = curr->Next;
            }
               tail->Next = curr;
              

           }
        }

        
};

#endif