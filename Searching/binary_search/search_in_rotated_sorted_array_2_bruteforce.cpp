#include<iostream>
#include<vector>

bool searchRotated(std::vector<int>& nums , int target) {

        int n = nums.size();

        for(int i = 0 ; i < n ; i ++) {

                if(nums[i] == target) {

                     return true;

                }

        }

        return false;

}

int main () {

        std::vector<int> nums = {3 , 1 , 2 , 3 , 3 , 3  , 3} ;

        int target = 2 ;

         if(searchRotated(nums , target)){

            std:: cout << std::boolalpha << true << std:: endl;

         }else{
             std:: cout << std::boolalpha << false << std:: endl;
         }

        
 
        return 0 ;

}