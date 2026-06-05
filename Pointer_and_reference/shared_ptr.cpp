#include<iostream>
#include<memory>

int main() {

    std::shared_ptr<int>ptr = std::make_shared<int>(400);

    std::cout << *ptr << std::endl;
    
    std::shared_ptr<int>ptr1 = std::move(ptr);
    
    std::cout << *ptr1 << std::endl;
    
    std::cout << *ptr << std::endl;
    return 0 ;

}