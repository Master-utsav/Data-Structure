#include<bits/stdc++.h>
#include"linked_list.h"

//check loop is present or not ? return the bool value

using namespace std;

class checkLoop : public Node{
       
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
};

int main(){
    
    checkLoop obj;

    Node* head = NULL;
    Node* tail = NULL;

    obj.insertAthead(head , tail , 10);
    obj.insertAthead(head , tail , 20);
    obj.insertAthead(head , tail , 30);
    obj.insertAthead(head , tail , 40);
    obj.insertAthead(head , tail , 50);

    obj.loopRandom(head , tail , 2);

    bool ans = obj.checkloop(head);

    if(ans){
        cout<<"Loop is present"<<endl;
    }
    else{
        cout<<"Loop is not present"<<endl;
    }


    return 0;
}