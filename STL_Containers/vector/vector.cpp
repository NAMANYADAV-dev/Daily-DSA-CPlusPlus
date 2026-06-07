#include<iostream>
#include<vector>

int main () {

        std::vector<int> nums;

        nums.push_back(1);
        nums.push_back(2);
        nums.push_back(3);
        nums.push_back(4);
        nums.push_back(5);

        if(!nums.empty()){

            
            for (int i = 0 ; i < nums.size() ; i++){
                
                std:: cout << &nums[i] << std:: endl;
                
            }
            
        }else{


                std:: cout << "Vector is empty...\n";

        }

         std:: cout <<  "capacity is : "  << nums.capacity() << std::endl;

        return 0 ;
}