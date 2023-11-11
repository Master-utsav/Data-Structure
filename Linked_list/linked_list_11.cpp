#include<bits/stdc++.h>
#include"linked_list.h"

// reverse k groups of the linked list 
// error i will try this later on 12 nov ]

using namespace std;

class reverseK : public Node{

    public:

        Node* reverseKinGroup(Node* &head , int &k ){
            Node* prev = NULL;
            Node* curr = head;
            Node* nextNode = curr->Next;
            
            int length = LengthLL(head);

            int position = 0;

            if(length < 1){
                return head;
            }

                while(position < k){
                    nextNode = curr->Next;
                    curr->Next = prev;
                    prev = curr;
                    curr = nextNode;
                    position++;
                }

                Node* recursionAns = NULL;
                if(nextNode != NULL){
                    recursionAns = reverseKinGroup(nextNode , k);
                    head->Next = recursionAns;
                }

                return prev;

        }
};

int main(){
    
    reverseK obj;

    Node* head = NULL;
    Node* tail = NULL;

    obj.insertAthead(head , tail , 10);
    obj.insertAthead(head , tail , 20);
    obj.insertAthead(head , tail , 30);
    obj.insertAthead(head , tail , 40);
    obj.insertAthead(head , tail , 50);
    obj.insertAthead(head , tail , 60);
    obj.insertAthead(head , tail , 70);

    cout<<"Before reversing : ";
    obj.PrintLL(head);
    cout<<endl;
    
    int k;
    cout<<"enter the k : ";
    cin>>k;
   
    cout<<"after k group revrsing : ";
    obj.PrintLL(obj.reverseKinGroup(head , k));
    cout<<endl;

    return 0;
}