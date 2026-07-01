#include<iostream>
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

                int helper(Node*temp , int key) {

                    if(temp == NULL) {

                        return 0 ; 

                    }

                        if(temp->data == key) {

                                return 0 ;

                        }

                        int idx = helper(temp->next , key);
                        if(idx == -1) {

                             return -1;

                        }

                        return idx + 1 ; 

                }

              int searchRec(int key) {

                    return helper(head , key);

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

    std:: cout << "Lenght is : " <<  ll.length() << std::endl;

    ll.insertAtPosition(500 , 3);

    
    ll.display();
    ll.popInFront();
    
    ll.display();

    std::cout << ll.searchRec(9) << std::endl;
    return 0 ;

}