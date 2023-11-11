#include<bits/stdc++.h>
#include"linked_list.h"

// remove all duplicates from a sorted linked list

using namespace std;

class removeDuplicate : public Node{
       
      public:
            Node* removeDupli(Node* &head){
                Node* temp = head;

                if(head == NULL || head->Next == NULL){
                    return head;
                }

                else{
                    while(temp != NULL){

                        if(temp->Next != NULL && temp->data == temp->Next->data){
                            // remove 
                            Node* newNode = temp->Next;
                            temp->Next = newNode->Next;
                            newNode->Next = NULL;
                            delete newNode;
                        }
                        
                        else{
                            temp = temp->Next;
                        }
              
                    }

                    return head;
                }     
            }
};

int main(){

    removeDuplicate obj;

    Node* head = NULL;
    Node* tail = NULL;

    obj.insertAthead(head , tail , 5);
    obj.insertAthead(head , tail , 5);
    obj.insertAthead(head , tail , 4);
    obj.insertAthead(head , tail , 4);
    obj.insertAthead(head , tail , 4);
    obj.insertAthead(head , tail , 3);
    obj.insertAthead(head , tail , 2);
    obj.insertAthead(head , tail , 2);
    obj.insertAthead(head , tail , 1);
    obj.insertAthead(head , tail , 0);

    obj.PrintLL(head);
    cout<<endl;
   
    Node* newHead = obj.removeDupli(head);

    obj.PrintLL(newHead);
    cout<<endl;

    return 0;
}