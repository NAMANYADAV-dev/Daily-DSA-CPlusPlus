#include<iostream>
#include<memory>

int main() {

     std::unique_ptr<int>ptr = std::make_unique<int>(40);

     std::cout << *ptr << std::endl;
     
     *ptr = 100;
     
     std::cout << *ptr << std::endl;
     
     ptr = std::make_unique<int>(500);
     
     std::cout << *ptr << std::endl;
     
     //  std::unique_ptr<int>ptr1 = std::make_unique<int>(*ptr);
     std::unique_ptr<int>ptr1 = std::move(ptr);
     
     std:: cout<<  *ptr1 << std::endl;
     
     std::cout << *ptr << std::endl;
     return 0 ;

}