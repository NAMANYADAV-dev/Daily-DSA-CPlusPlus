#include<iostream>

int main () {

        int nums;
        std::cout << "Enter your nums: " << std::endl;
        std::cin>>nums;

        if(nums & 1) {


            std:: cout << "Odd" << std::endl;

        }else{

            std::cout<< "Even" << std::endl;

        }

        return 0 ; 

}