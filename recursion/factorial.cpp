#include<iostream>

long long factorial (int nums1) {

       if(nums1 == 0) {

            return  1;

       }

       return   nums1 * factorial(nums1 - 1);

}

int main () {

    int nums ;
    std::cout << "Enter you nums: " << std::endl;
    std::cin>>nums;

    std:: cout << factorial(nums) << std::endl;

    return 0 ;

}