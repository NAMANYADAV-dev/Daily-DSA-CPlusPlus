#include<iostream>
#include<string>

int main() {

    std:: string s ;

     std:: getline(std::cin , s);

     for( int i = 0 ; i < s.size() ; i ++) {

            std:: cout << s[i] << std::endl;

     }

     std:: cout << s << std::endl;

     

}