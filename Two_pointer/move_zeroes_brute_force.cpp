#include<iostream>
#include<vector>


int main () {

        std::vector<int> nums = {0 , 1 , 0 , 3 , 12};

        int n = nums.size();

        std:: vector<int> moveZeros;

        int countZeros = 0 ;

        for(int i = 0 ; i < n ; i++) {


                if(nums[i] == 0) {

                    countZeros++;

                }else{

                    moveZeros.push_back(nums[i]);

                }

        }


      for(int i = 0 ; i < countZeros ; i++) {

            moveZeros.push_back(0);

      }

      
      for(int i = 0 ; i <  n ;i++) {

            std:: cout << moveZeros[i] << std::endl;

      }


      return 0 ;

}