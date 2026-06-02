#include<iostream>

int main () {

    double bankBalance = 10000;

    double *ptr = nullptr;

    ptr = &bankBalance;

    std::cout << *ptr  << std::endl;
    
    return 0 ;

}