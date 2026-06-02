#include<iostream>

int main () {

    int tenValue = 10 ;

    void *ptr = &tenValue;

    std:: cout << *(int*)ptr  << std:: endl;

    return 0 ;

}