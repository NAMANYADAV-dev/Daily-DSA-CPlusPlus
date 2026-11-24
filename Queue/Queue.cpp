#include<iostream>
using namespace std;

class Node {
        public:

                int data;
                Node*next;
        
        Node(int value) {

                this->data = value;
                this->next = NULL;
        

        }
};

class LinkedList {

        public:

                Node*head;
                Node*tail;
        
        LinkedList() {
                head = NULL;
                tail = NULL;
        }

        void insertAtEnd (int value){
                Node*newNode = new Node(value);

                if(head ==NULL){
                        head = newNode;
                        tail = newNode;
                }
                else {
                        tail->next = newNode;
                        tail = newNode;
                }

        }

        void display (){

                Node*temp = head;
                while (temp->next != NULL){
                        cout << temp->data << "->";
                        temp = temp->next;
                }

                cout << "NULL" << endl;
               
        }
};


int main() {

        LinkedList ll;
        
        ll.insertAtEnd(20);
        ll.insertAtEnd(2);
        ll.insertAtEnd(30);
        ll.insertAtEnd(420);
        ll.display();

        return 0 ;
}