#include<iostream>
#include<vector>

int main () {


        int rowSize ; 
        std::cout << "Enter rowSize is : " << std::endl;
        std::cin>>rowSize;

        int colSize ; 
        std::cout << "Enter colSize is : " << std::endl;
        std::cin>>colSize;


        std:: vector<std::vector<int>>nums(rowSize , std::vector<int>(colSize));


        for(int i = 0 ; i < nums.size() ; i ++) {


                for(int j  = 0 ; j <= i ; j++) {


                        std:: cout << "* " ; 


                }

                    std:: cout << std::endl;

        }

        
            return 0 ; 


}