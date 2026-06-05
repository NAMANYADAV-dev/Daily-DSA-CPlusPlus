#include<iostream>
#include<vector>

int searchRotated(std::vector<int>& nums , int target) {

    int n = nums.size();

    for(int i = 0  ; i < n ; i ++ ) {

        if(nums[i] == target) {


              return i ; 
             

        }

    }

    return -1 ; 
}

int main () {

    std:: vector<int> nums = {4 , 5 , 6 , 7, 0 , 1 , 2} ;

    int target = 0 ;

    std::cout << searchRotated(nums , target) << std::endl;

    return 0 ;

}