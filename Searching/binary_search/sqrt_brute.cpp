#include<iostream>



int main () {

        int sqrtNumber  ;
        std::cout << "Enter your sqrt number .. " << std::endl;
        std::cin>>sqrtNumber;

        int answer = 0 ;

      for(int i = 1 ; i <= sqrtNumber ;i++) {


            if(1LL* i*i <= sqrtNumber ) {

                answer = i ;

            }else{

                break;

            }

      }

     std:: cout << answer << std::endl;

      return 0 ;

}