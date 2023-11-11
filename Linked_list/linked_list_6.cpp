#include<bits/stdc++.h>
#include".\linked_list.h"

// check loop is presengt or not by using map
using namespace std;

class loop : public Node{
       
       public:
       bool checkLoop(Node* head){
            
            map <Node* , bool > table;

            Node* temp = head;

            while(temp != NULL){

                if(table[temp] == false){

                    table[temp] = true;
                }
                else{
                    return true;
                }

                temp = temp->Next;
            }
            // loop not present
            return false;

       }

}; 

int main(){
    
    loop obj;
    Node* head = NULL;
    Node* tail = NULL;

    obj.insertAthead(head , tail , 50);
    obj.insertAthead(head , tail , 40);
    obj.insertAthead(head , tail , 30);
    obj.insertAthead(head , tail , 20);
    obj.insertAthead(head , tail , 10);

    obj.PrintLL(head);
    cout<<endl;

    obj.loopRandom(head , tail , 2);

    bool ans = obj.checkLoop(head);

    if(ans){
        cout<<"LOOP IS PRESENT"<<endl;
    }
    else{
        cout<<"LOOP IS NOT PRESENT"<<endl;
    }

    return 0;
}