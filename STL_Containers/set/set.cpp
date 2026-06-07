#include<iostream>
#include<set>

int main () {

    std::set<int>s;

    s.insert(19);
    s.insert(25);
    s.insert(21);
    s.insert(22);
    s.insert(23);

   for( auto it=s.begin() ; it!=s.end(); it++) {

        std:: cout << *it << std:: endl;

   }

   return 0 ;

}