#include<bits/stdc++.h>
#include"linked_list.h"

using namespace std;

// find the node where loop is started 

class creation : public Node{

        public:
        
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

            int startPoint(Node*&head , Node* &fast , Node* &slow){

                if(checkLoop(head , fast , slow)){

                       slow = head;

                       while(slow != fast){
                          slow = slow->Next;
                          fast = fast->Next;
                       }
                       
                       return slow->data;
                }
                else{
                    cout<<"there is no such loop exist"<<endl;
                    return -1;
                }
            }
};

int main(){
    
    creation obj;

    Node* head = NULL;
    Node* tail = NULL;
    Node* fast = head;
    Node* slow = head;

    obj.insertAthead(head , tail , 10);
    obj.insertAthead(head , tail , 20);
    obj.insertAthead(head , tail , 30);
    obj.insertAthead(head , tail , 40);
    obj.insertAthead(head , tail , 50);

    obj.PrintLL(head);
    cout<<endl;

    obj.loopRandom(head , tail , 2);

    cout<<"start element of the loop is : "<<obj.startPoint(head , fast , slow);

    return 0;
}