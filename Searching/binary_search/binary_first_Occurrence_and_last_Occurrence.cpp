#include<iostream>
#include<vector>

  void firstAndLastOccurrence(std::vector<int>& nums) {

        int n = nums.size();

        int target = 2;
        
        int firstOccurrence = -1 , lastOccurrence ;

        for( int i = 0 ; i < n ; i ++) {


              if(nums[i] == target){

                    lastOccurrence = i;

                    if(firstOccurrence == -1) {

                        firstOccurrence  = i ;

                    }

              }


        }

        std:: cout << firstOccurrence <<  " , " << lastOccurrence << std:: endl;


  }

int main () {


        std::vector<int> nums = {1 , 2 , 2, 2, 3, 5, 6};

        firstAndLastOccurrence(nums);

        return 0 ;


}