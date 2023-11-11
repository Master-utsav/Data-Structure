#include<bits/stdc++.h>
#include"linked_list.h"

// Removing a loop

using namespace std;

class Remove : public Node{

      public:
       bool checkloop(Node* &head){

                Node* slow = head;
                Node* fast = head;

                while(fast != NULL){
                    fast = fast->Next;

                    if(fast != NULL){
                        fast = fast->Next;
                        slow = slow->Next;
                    }

                    if(fast == slow){
                        return true;
                    }
                }

                return false;

            }
            bool checkLoop(Node* &head , Node* &fast , Node* &slow){
                fast = head;
                slow = head;

                while(fast != NULL){

                    fast = fast->Next;

                    if(fast != NULL){
                        fast = fast->Next;
                        slow = slow->Next;
                    }
                    
                    if(fast == slow){
                        return true;
                    }

                  }
                return false;
            }

            void RemoveLoop(Node*&head , Node* &fast , Node* &slow){

                if(checkLoop(head , fast , slow)){

                       slow = head;
                       Node* temp = fast;

                       while(slow != fast){
                          temp = fast;
                          slow = slow->Next;
                          fast = fast->Next;
                       }
                       
                       temp -> Next = NULL;

                }
                else{
                    cout<<"there is no such loop exist"<<endl;
                }
            }
};

int main(){
    
    Remove obj;

    Node* head = NULL; 
    Node* tail = NULL; 
    Node* fast = head;
    Node* slow = head;

    obj.insertAthead(head , tail , 10);
    obj.insertAthead(head , tail , 20);
    obj.insertAthead(head , tail , 30);
    obj.insertAthead(head , tail , 40);
    obj.insertAthead(head , tail , 50);

    if(obj.checkloop(head)){
        cout<<"loop is present";
    }
    else{
        cout<<"lopp is not present";
    }
    cout<<endl;

    obj.loopRandom(head , tail , 4);

    if(obj.checkloop(head)){
        cout<<"loop is present";
    }
    else{
        cout<<"lopp is not present";
    }
    cout<<endl;

    obj.RemoveLoop(head , fast , slow);

    if(obj.checkloop(head)){
        cout<<"loop is present";
    }
    else{
        cout<<"loop is not present";
    }
    return 0;
}