#include<iostream>

int main () {

    

    // pointer to const int 

    int tenValue = 10 ;

    const int *ptr = &tenValue;

    std::cout << *ptr << std::endl;
    
    int hundredValue = 100;
    
    ptr = &hundredValue;
    
    std::cout << *ptr << std::endl;




    //const pointer to int 


    int fortyValue = 40;

    int *const ptr1 = &fortyValue;

    std:: cout << *ptr1 << std:: endl;
    
    *ptr1 = 400;
    
    std:: cout << *ptr1 << std:: endl;





    // const pointer to const int

     int fiftyValue = 50;

     const int *const ptr3 = &fiftyValue;

     std:: cout << *ptr3 << std:: endl;

    return 0 ;


}