#include<iostream>
#include<vector>

  void firstAndLastOccurrence(std::vector<int>& nums) {

        int n = nums.size();

        int target = 8;
        
        int firstOccurrence = -1 , lastOccurrence = -1  ;

        int left = 0;
        
        int right = n - 1 ;

        while(left <= right) {

             int mid = left + (right - left)/2;

             if(nums[mid] == target) {

                    firstOccurrence = mid ;

                    right = mid - 1 ;

             }else if (nums[mid] < target) {

                    left = mid + 1;
             }else{

                    right = mid - 1;
             }

        }

        left  = 0 ;

        right = n - 1 ;


        while(left <= right) {

             int mid = left + (right - left)/2;

             if(nums[mid] == target) {

                    lastOccurrence= mid ;

                    left = mid + 1;

             }else if (nums[mid] > target) {

                    right = mid - 1;
             }else{

                    left = mid + 1;
             }

        }

        std:: cout <<  " [ " << firstOccurrence << " , " << lastOccurrence << " ] " <<  std:: endl;


  }

int main () {


        std::vector<int> nums = {5,7,7,8,8,10};

        firstAndLastOccurrence(nums);

        return 0 ;


}