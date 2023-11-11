#include<bits/stdc++.h>
#include"linked_list.h"

// check whether the given list is palindrome or not

using namespace std;

class palindrome : public Node{

        public:
            bool checkPalindrome(Node* head , Node* tail) {

                 Node* midLL = midOfLL(head);
                 Node* head1 = head;
                 Node* head2 = midLL->Next;
                 midLL->Next = NULL;
                 
                 ReverseLL(head2);

                 while(head2 != NULL && head1 != NULL){
                    if(head1->data != head2->data){

                        return false;
                    }
                    else{
                        head1 = head1->Next;
                        head2 = head2->Next;
                    }
                 }

                 return true;
  
            }

};

int main(){
    
    palindrome obj1;
    Node* head = NULL;
    Node* tail = NULL;

    obj1.insertAthead(head , tail , 10);
    obj1.insertAthead(head , tail , 20);
    obj1.insertAthead(head , tail , 30);
    obj1.insertAthead(head , tail , 20);
    obj1.insertAthead(head , tail , 10);

    obj1.PrintLL(head);
    cout<<endl;

    // cout<<"length of the given linked list : "<<obj1.LengthLL(head)<<endl;

    // obj1.ReverseLL(head , tail);
    // obj1.PrintLL(head);
    // cout<<endl;


    bool ans = obj1.checkPalindrome(head , tail);

    if(ans){
        cout<<"is a valid palindrome"<<endl;
    }
    else{
        cout<<"is an invalid palindrome"<<endl;
    }
   
 
    return 0;
}