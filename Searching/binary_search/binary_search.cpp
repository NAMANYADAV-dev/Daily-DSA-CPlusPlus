#include<iostream>
#include<vector>

int binarySearch(std::vector<int>& nums) {

        int n = nums.size();

        int target = 60;

        int low = 0 ;

        int high = n - 1 ;

        while(low <= high) {

            int mid = low + (high - low)/2;

            if(nums[mid] == target) {


                return mid ;


            }else if (nums[mid] < target ) {

                    low = mid + 1;

            }else {

                    high = mid - 1 ;

            }

        }

        return -1 ;


}

int main () {

      std::vector<int> nums = {10 , 20 , 30 , 40 , 50 ,  60 , 70 };

     std:: cout <<  binarySearch(nums) << std::endl;


} 