#include<iostream>
#include<list>

template<class T>

class Stack {

    public:

            std::list<T>ll;

        

    void push(int val) {

            ll.push_front(val);

    }

    void pop() {

            ll.pop_front();

    }

    T top() {

        return ll.front();

    }

        
    bool isEmpty() {

        return ll.empty();

    }

};

int main () {

    Stack <int> s;
    s.push(10);
    s.push(9);
    s.push(8);
    
    while(!s.isEmpty()) {

            std:: cout << s.top() << " " ;

            s.pop();

    }

    std::cout << std::endl;
    return 0 ;
}