#include<iostream>

int main  () {

     int *ptr = new int(100) ;

     std:: cout << *ptr << std:: endl;

     delete ptr;

     ptr = nullptr;

     ptr = new int(2000);

     std::cout << *ptr << std:: endl;

     return 0 ;


}