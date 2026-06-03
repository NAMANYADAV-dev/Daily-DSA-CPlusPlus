#include<iostream>
#include<vector>

  void firstAndLastOccurrence(std::vector<int>& nums) {

        int n = nums.size();

        int target = 8;
        
        int firstOccurrence = -1 , lastOccurrence = -1  ;

        for( int i = 0 ; i < n ; i ++) {


              if(nums[i] == target){

                    lastOccurrence = i;

                    if(firstOccurrence == -1) {

                        firstOccurrence  = i ;

                    }

              }


        }

        std:: cout << "[" <<  firstOccurrence <<  " , " << lastOccurrence << "]" << std:: endl;


  }

int main () {


        std::vector<int> nums = {5,7,7,8,8,10};

        firstAndLastOccurrence(nums);

        return 0 ;


}