#include<iostream>
#include<iterator>
#include<list>

int main () {

    std::list<int> ll;

    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    std::list<int>::iterator  it;

    for(auto it = ll.begin(); it!= ll.end(); it++) {

                std:: cout << *it << std::endl;

    }

    std:: cout << ll.size() << std::endl;

    return 0 ; 

}

