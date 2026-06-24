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


                int length() {

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

};

int main () {

    List ll;
    
    ll.push_front(229);
    ll.push_front(6);
    ll.push_front(29);
    ll.push_front(9);

    ll.push_back(40);
    ll.push_back(4);
    ll.push_back(10);
    ll.push_back(10);


    ll.display();
    std:: cout << "Lenght is : " <<  ll.length() << std::endl;
    if(ll.search(4)) {

        std:: cout << std:: boolalpha << true << std::endl;
        
    }else{
        
        std:: cout << std:: boolalpha << false << std::endl;


    }

    return 0 ;

}