#include<bits/stdc++.h>

using namespace std;

// Singley Linked list CREATION , INSERTION , DELETION { try to understand what we are doing}

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
        ~Node(){  
            cout<<"Destuctor called for : "<<data<<endl;
        }

};

int lengthOfLL(Node* head);

void insertaAtHead(Node* &head , Node* &tail , int data){

    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
   
    else{
        // creation of new node
        Node* newNode = new Node(data);
        // attach new node to head 
        newNode->Next = head;
        // update head
        head = newNode;

    }
}

void insertAtTail(Node* &head , Node* &tail , int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }

    else{
        // creation of new n0de
        Node* newNode = new Node(data);
        // attach node to tail next
        tail->Next = newNode;
        // update tail Null
        tail = newNode;
    }
}

void PrintLL(Node* head){
    Node* temp = head;

    if(temp == NULL){
        cout<<temp->data<<"->";
    }
    
    else{
        while(temp != NULL){

            cout<<temp->data<<"->";
            temp = temp->Next;
        }
    }

}

void insertAtRandom(Node* &head , Node* &tail , int data , int position){

      int length = lengthOfLL(head);

      if(position < 0 || position > length+1 ){
        cout<<"Invalid position , position is out of bound : "<<position<<endl;
        cout<<"position must be in range of [0 , "<<length+1<<"]"<<endl ;
        cout<<"that's why we cant insert at : "<<position<<endl;
        return;
      }

      if ( position == 0){
         Node* newNode = new Node(data);
         newNode->Next = head;
         head = newNode; 
      }

      else if(position == length+1){
          Node* newNode = new Node(data);
          tail->Next = newNode;
          tail = newNode;
      }
      else {
        Node* temp = head;
        Node* curr = head;

        Node* newNode = new Node(data);

        while(position != 1){
            position--;
            curr = temp;
            temp = temp->Next;   
        }

        curr->Next = newNode;
        newNode->Next = temp;

      }

}

void deleteNode(Node* &head , Node* &tail , int position){

    int length = lengthOfLL(head);

    if(position == 0 || position == length+1){
        cout<<"there is no such node exist "<<endl
        <<"Invalid position , position is out of bound : "<<position<<endl
        <<"position must be in range of [0 , "<<length<<"]"<<endl 
        <<"that's why we cant delete at : "<<position<<endl;
        return;
    }

    if(position == 1){
        Node* temp = head;

        // next head ko head banao
        head = head->Next;

        // temp-Next ko null karenge taki temp isolated ho jaye 
        temp->Next = NULL;

        // ab temp ko delte kar denge
        delete temp;
    }

    else if(position == length){
        Node* prev = head;  // new approach here !!!!!!
        
        // jab tak prev ka next null nahi hota  tab tak prev ko aage badao
        while(prev->Next != tail){
            prev = prev->Next;
        }
        
        // last main previous ke next ko null karo 
        prev->Next = NULL;
        
        // ab tail isolated hai so tail ko delte karo 
        delete tail;
       
        // ab tail ko update karo prev ko hi tail bana do 
        tail = prev;
 
    }

    else{
        // first create a prev head node 
        Node* prev = head;
        // second create a temp node for iterating 
        Node* temp = head;
        
        while(position != 1 ){
            // jab tak postion ki value one nahi ho jati tab tak decrement karte rehna hai 
            position--; 
            prev = temp; // prev main initally head store hai so temp ka data store karega prev 
            temp = temp->Next;   // aur fir temp ko hum aage bada denge   
        }
        Node* curr = temp->Next; // last main current node create karenge jo ki temp ke next ko point karega
        
        temp->Next = NULL; // now for isolating the temp temp->Next ko hum null bana denge 
        prev->Next = NULL; // now prevv ke next ko null kar denge 
        delete temp; // delete karna hai temp ko ab isolate ho chuki hai temp so 
        prev->Next = curr; // perv-> next ko curr kar denge 
    }
}

int lengthOfLL(Node* head){

    Node* temp = head;
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

void createTail(Node* &head , Node* &tail){
    Node *temp = head;
    while(temp->Next != NULL){
        temp = temp->Next;
    }
    tail = temp;
}

int main(){

    Node *head = NULL;
    Node *tail = NULL;

    insertaAtHead(head , tail , 50);
    insertaAtHead(head , tail , 40);
    insertaAtHead(head , tail , 30);
    insertaAtHead(head , tail , 20);
    insertaAtHead(head , tail , 10);
    insertAtTail(head , tail , 60);
    insertAtTail(head , tail , 70);

    // insertAtRandom(head, tail , 100 , 12);
    insertAtRandom(head, tail , 35 , 4);
    insertAtRandom(head, tail , 80 , 9);

    PrintLL(head);
    cout<<endl;
    cout<<"length of Linked list : " <<lengthOfLL(head)<<endl;

    deleteNode(head , tail , 1);

    PrintLL(head);
    cout<<endl;
    cout<<"length of Linked list : " <<lengthOfLL(head)<<endl;

    deleteNode(head , tail , 8);
    PrintLL(head);
    cout<<endl;
    cout<<"length of Linked list : " <<lengthOfLL(head)<<endl;

    deleteNode(head , tail , 5);
    PrintLL(head);
    cout<<endl;
    cout<<"length of Linked list : " <<lengthOfLL(head)<<endl;

    deleteNode(head , tail , 0);
    PrintLL(head);
    cout<<endl;
    cout<<"length of Linked list : " <<lengthOfLL(head)<<endl;

    return 0;
}