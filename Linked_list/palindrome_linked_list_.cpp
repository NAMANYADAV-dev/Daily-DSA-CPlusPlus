#include<iostream>

class Node {

    public:

            int data;

            Node*next;

        
        Node(int val) {

            this->data = val;
            this->next = nullptr;

        }

};


class List {

     private:

        Node*head;
        Node*tail;


    public: 


        List() {

            head = nullptr;
            tail = nullptr;

        }


        int length () {

                int sizeLinkedList = 0 ;

                Node*temp  = head;

                while(temp != nullptr) {

                        temp = temp->next;

                        sizeLinkedList++;

                }


                return sizeLinkedList;

        }


            void push_front(int val) {

                    Node*newNode = new Node(val);

                    if(head == nullptr) {

                         head = tail = newNode;

                    }else{

                        newNode->next = head;
                        head = newNode;


                    }

                    

            }


            void display () {

                    Node*temp = head;


                    while(temp != nullptr) {

                            std:: cout << temp->data << " <---- ";
                            temp = temp->next;

                    }

                    std::cout << "NULL" << std::endl;
            }


            bool isPalindrome() {

               // Step 1: Find middle
                Node* slow = head;
                Node* fast = head;

                if(head == nullptr && head->next == nullptr) {
                        return true;
                }

                while (fast != nullptr && fast->next != nullptr) {
                    slow = slow->next;
                    fast = fast->next->next;
                }

                   // Step 2: Reverse second half
                Node* prev = nullptr;
                Node* curr = slow;
                Node* next = nullptr;

                while (curr != nullptr) {

                    next = curr->next;
                    curr->next = prev;

                    prev = curr;
                    curr = next;
                }

                //step 3: compare both half
                
                    Node*left = head;
                     Node*right= prev;

                 while(right != nullptr) {

                    if(left->data != right->data) {

                            return false;
                    }

                    left = left->next;
                    right = right->next;
                }

                return true;
            }


        
};

int main () {

        List ll;

        ll.push_front(1);
        ll.push_front(2);
        ll.push_front(2);
        ll.push_front(1);

        std:: cout << "length is : " << ll.length() << std::endl;

        ll.display();

        if(ll.isPalindrome()) {

                std::cout << std::boolalpha << true << std::endl;
                
            }else{
                
                
                std::cout << std::boolalpha << false << std::endl;

        }

        return 0 ;
        
    }