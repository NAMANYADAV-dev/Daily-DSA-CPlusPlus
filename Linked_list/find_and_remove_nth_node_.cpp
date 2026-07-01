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


                int lengthLinkedList() {

                        Node *temp = head;
                        int count = 0 ; 

                        while(temp != NULL) {

                            count ++;
                            temp = temp->next;

                        }
                        return count;

                } 


                bool search(int key) {

                        Node* temp = head;

                      while(temp != NULL) {

                            if(temp->data == key) {

                                return true;

                            }
                            
                         temp = temp->next;
                            
                        }
                        
                        return false;
                }



                void insertAtPosition(int val , int pos) {

                        Node *newNode = new Node(val);

                        Node *temp = head;

                        for(int i = 0 ; i < pos - 1 ; i ++) {

                                if(temp == NULL) {

                                    std:: cout << "Position is Invalid\n";
                                    return ;

                                }

                                temp = temp->next;

                        }

                        newNode->next = temp->next;

                        temp->next = newNode;

                }



                void popInFront() {

                    if(head == NULL) {

                        std:: cout << "Invalid size\n";
                        return ; 

                    }
                    Node* temp = head;

                    head = head->next;

                    temp->next = NULL;

                    delete temp;

                }


                void reverse() {

                    Node* curr = head;
                    Node* prev = NULL;

                    while(curr != NULL) {

                        Node*next = curr->next;

                        curr->next = prev;

                        prev = curr;

                        curr = next;

                    }

                        head = prev;

                }


                void removeNth(int n) {

                    Node* prev = head;

                    int size = lengthLinkedList();


                        for(int i = 1 ; i < (size-n) ; i++) {

                                prev = prev->next;

                        }

                        prev->next = prev->next->next;


                }
                
};

int main () {

    List ll;
    
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    std:: cout << "Lenght is : " <<  ll.lengthLinkedList() << std::endl;
    
    ll.reverse();
    
    ll.display();

    ll.removeNth(3);

    ll.display();


    return 0 ;

}