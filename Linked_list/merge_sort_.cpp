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


Node* merge(Node* left , Node* right) {

        if(left == NULL) {
                return right;
        }

        if(right == NULL) {
                return left;
        }

        Node* head = NULL;
        Node* tail = NULL;

        if(left->data <= right->data) {
                head = tail = left;
                left = left->next;
        } else {
                head = tail = right;
                right = right->next;
        }

        while(left != NULL && right != NULL) {
                if(left->data <= right->data) {
                        tail->next = left;
                        tail = left;
                        left = left->next;
                } else {
                        tail->next = right;
                        tail = right;
                        right = right->next;
                }
        }

        tail->next = (left != NULL) ? left : right;

        return head;
}

Node* mergeSort(Node* head) {

        if(head == NULL || head->next == NULL) {
                return head;
        }

        Node* rightHead = splitAtMid(head);

        Node* leftSorted = mergeSort(head);
        Node* rightSorted = mergeSort(rightHead);

        return merge(leftSorted, rightSorted);

}

int main () {

        List ll;

        ll.push_front(1);
        ll.push_front(2);
        ll.push_front(3);
        ll.push_front(4);

        ll.display();

        ll.setHead(mergeSort(ll.getHead()));

        ll.display();

        return 0 ; 
}