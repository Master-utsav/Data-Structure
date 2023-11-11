#include<bits/stdc++.h>
#include"linked_list.h"

// add 1 in the given linked list example:
//-INPUT : 9 -> 9 -> 9 ->
//OUTPUT : 1 -> 0 -> 0 -> 0 ->
using namespace std;

class addOne : public Node{
    
    public:
        void addOneInLL(Node* &head){
        // reverse

        ReverseLL(head);

        // add 1
        Node* temp = head;
        int carry = 1;

        while(temp->Next != NULL){

            int TotalSum = temp->data + 1;
            int digit = TotalSum % 10;
            carry = TotalSum / 10;

            temp->data = digit;
            temp = temp->Next;

            if(carry == 0){
                break;
            }
        }

        if(carry == 1){

            int TotalSum = temp->data + 1;
            int digit = TotalSum % 10;
            carry = TotalSum / 10;

            temp->data = digit;

        }
        if(carry != 0){
            Node* newNode = new Node(carry);
            temp->Next = newNode;
        }
        

        // reverse
        ReverseLL(head);
    }
};

int main(){
    
    addOne obj;

    Node* head = NULL;
    Node* tail = NULL;

    obj.insertAthead(head , tail , 9);
    obj.insertAthead(head , tail , 9);
    obj.insertAthead(head , tail , 8);

    cout<<"before adding one : ";
    obj.PrintLL(head);
    cout<<endl;
    
    obj.addOneInLL(head);
    cout<<"-after adding one : ";
    obj.PrintLL(head);
    cout<<endl;

    return 0;
}