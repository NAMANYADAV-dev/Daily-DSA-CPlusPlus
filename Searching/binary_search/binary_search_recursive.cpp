#include<iostream>
#include<vector>

int binarySearch(std::vector<int>& nums , int low , int high , int target ) {


                if(low > high) {

                    return -1 ;
                }

                int mid = low + (high - low) / 2;

                if(nums[mid] == target) {

                        return mid ;

                }
                
                if(nums[mid] < target) {


                    return binarySearch(nums , mid + 1 , high , 60);
                    
                }
                
                return binarySearch(nums , low , mid - 1  , 60);

}

int main () {

      std::vector<int> nums = {10 , 20 , 30 , 40 , 50 ,  60 , 70 };

      int n = nums.size();

      int target = 60 ;

     std:: cout <<  binarySearch(nums , 0 , n - 1 , 60) << std::endl;


} 