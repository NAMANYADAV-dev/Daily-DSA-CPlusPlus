#include<iostream>

class Node {

    public:

        int data;

        Node* next ;

        Node*prev;

        Node(int val) {

            this->data = val;

            this->next = NULL;

            this->prev = NULL;

        }



};


class DoubleyLinkedList {

     public:

            Node*head;

            Node*tail;


            DoubleyLinkedList() {

                head = tail = NULL;

            }

            void push_front(int val) {

                 Node*newNode = new Node(val);

                 if(head == NULL) {

                        head = tail = newNode;

                 }
                 else{

                        newNode->next = head;

                        head->prev = newNode;

                        head = newNode;

                 }


            }


            void printList() {

                    Node*temp = head;


                    while (temp != NULL) {

                            std:: cout << temp->data << " <--- " ;

                            temp = temp -> next;

                    } 

                    std::cout << "NULL\n";
            }
};




int main () {

    DoubleyLinkedList dbll;

    dbll.push_front(5);
    dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);

    dbll.printList();

    return 0 ;


}