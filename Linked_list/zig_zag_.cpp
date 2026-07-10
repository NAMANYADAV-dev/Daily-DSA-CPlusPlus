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
        void setHead(Node* newHead) { head = newHead; }
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

                                std:: cout << temp->data << "<----";
                                temp = temp->next;
                                
                            }
                            std::cout << "NULL";

                        std::cout << std::endl;

                }
};

Node* splitAtMid(Node* head) {

        Node* slow = head;
        Node* fast = head;

        Node* prev = NULL;

        while(fast != NULL && fast->next != NULL) {

                prev = slow;
                slow = slow->next;
                fast = fast->next->next;

        }

        if(prev != NULL) {

                prev->next = NULL;

        }

        return slow;

}


Node* reverse(Node* head) {

        Node*prev = NULL;

        Node*curr = head;

        Node*next = NULL;


        while(curr != NULL) {

              next = curr->next;

              curr->next = prev;

              prev = curr;

              curr = next;

        }

          return prev;       

}


Node* ZigZag (Node*head) {

        Node* rightHead = splitAtMid(head);

        Node* rightHeadRev = reverse(rightHead);
    
        Node* left = head;

        Node*right = rightHeadRev;

        Node*tail = right;

        while(left != NULL && right != NULL) {

            Node* nextLeft = left->next;

            Node* nextRight = right->next;

            left->next = right;
            
            right->next = nextLeft;

            tail = right;

            left = nextLeft;

            right = nextRight;
        }

        if(right != NULL) {

            tail->next = right;
            
        }        

        return head;
}



int main () {

        List ll;

        ll.push_front(5);
        ll.push_front(4);
        ll.push_front(3);
        ll.push_front(2);
        ll.push_front(1);

        ll.display();

        Node*newNode = ZigZag(ll.getHead());

        ll.setHead(newNode);

        ll.display();

        return 0 ; 

}