#include<iostream>
#include<vector>

int totalNumber(std::vector<int>& nums , int k ) {

        int n = nums.size() ;

        int totalNumber = 0 ;

        for(int i = 0 ; i < n ; i ++ ) {

                int sum = 0 ;

                for(int j = i ; j < n ; j++) {

                    sum +=nums[j];

                    if(sum == k) {

                        totalNumber++ ; 

                    }

                }

        }

        return totalNumber ;


}

int main () {

    std:: vector<int> nums = {1 , 1 , 1} ; 

    int k  = 2 ;

   std:: cout << totalNumber(nums , k ) << std:: endl;

   return 0 ;

}