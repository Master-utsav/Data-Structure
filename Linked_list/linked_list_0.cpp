#include<bits/stdc++.h>

using namespace std;

// Basic type of structure which tell how linked list looks like 
class Node{
    public:
        int data;
        Node* Next;

        Node(){

            // cout<<"default constructor was called"<<endl;

        }
        Node(int data){

            // cout<<"param const was called"<<endl;
            this->data = data;
            this->Next = NULL;

        }

};

void PrintLL(Node* head){

    Node* temp = head;
    int couttemp = 0;

    if(head == NULL){
        cout<< temp->data <<"->";
    }
    else{

        while(temp != NULL){
            cout<< temp->data <<"->";
            temp = temp->Next;
            couttemp++;
        }

        cout<<endl;
    }

    cout<<"length of the linked list : "<<couttemp;
}

int main(){
    
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

    first->Next = second;
    second->Next = third;
    third->Next = fourth;
    fourth->Next = fifth;
    fifth->Next = NULL;

    PrintLL(first);
     

    return 0;
}