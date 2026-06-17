#include<iostream>
#include<vector>


int main () {

        std::vector<int> nums = {0 , 1 , 0 , 3 , 12};

        int n = nums.size();

        int k = 0 ;
    
        for(int i = 0 ; i < n ; i++) {

            if(nums[i]!=0) {

              std::swap(nums[k] , nums[i]);

              k++;

            }

        }


        for(int i = 0 ; i < n ; i++) {

            std:: cout << nums[i] << std::endl;

        }

      return 0 ;

}