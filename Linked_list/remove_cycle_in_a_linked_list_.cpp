#include<iostream>

class Node{

    public:
            int data;
            Node *next;
    

            Node(int val) {

                this->data = val;
                next = NULL; 

            }


};


class List{
     private:
        Node* head;
        Node* tail;
    public:
         List() {

            head = NULL;
            tail = NULL;

        }
        // getters to allow access to head/tail from outside
        Node* getHead() { return head; }
        Node* getTail() { return tail; }
        void push_front(int val) {

                Node* newNode = new Node(val);
            
                if(head == NULL){

                    head = tail = newNode;
                    
                } else {

                    newNode->next = head;
                    head = newNode;

                }

        }


                void push_back(int val) {

                    Node *newNode = new Node(val);

                    if(head == NULL) {

                            head = tail = newNode;

                    }else{

                            tail->next = newNode;

                            tail = newNode;

                    }

                }


                void display()  {

                        Node* temp = head;
                    
                        while(temp != NULL) {

                                std:: cout << temp->data << std::endl;
                                temp = temp->next;

                        }


                }
};


void removeCycle(Node*head) {

    Node*slow = head;
    Node*fast = head;   
    bool isCycle = false;

    while(fast != NULL && fast->next != NULL) {

            slow = slow->next;

            fast = fast->next->next;

            if(slow == fast) {

                isCycle = true;
                break;

            }

    }

    if(!isCycle) {

            return;

    }

    slow = head;

    if(fast == head) {


            while(fast->next != slow) {

                    fast = fast->next;

            }

            fast->next = NULL;

    }else{

            Node*prev = fast;

            while(slow != fast) {

                    slow = slow->next;

                    prev = fast;

                    fast = fast->next;
                    
            }

            prev->next = NULL;

    }


}


int main () {

        List ll;

        ll.push_front(4);
        ll.push_front(3);
        ll.push_front(2);
        ll.push_front(1);

        // create cycle: point tail->next to head using getters
        ll.getTail()->next = ll.getHead();

        removeCycle(ll.getHead());

        ll.display();

        return 0 ; 
}