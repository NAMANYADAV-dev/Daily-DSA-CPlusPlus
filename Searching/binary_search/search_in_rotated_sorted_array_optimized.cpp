#include<iostream>
#include<vector>

int searchRotated(std::vector<int>& nums1 , int target) {

      int n = nums1.size();

      int low = 0 ;

      int high = n - 1 ; 

      while(low <= high ) {

            int mid = low + (high - low)/2;

            if(nums1[mid] == target) {


                  return mid ;


            }

            if(nums1[low] <= nums1[mid]) {

                    if(target >= nums1[low] && target < nums1[mid]) {

                            high = mid - 1; 

                    }else{

                            low = mid + 1;

                    }

            }


            else {

                    if(target > nums1[mid] && target <= nums1[high]) {

                            low = mid + 1 ;

                    }else{

                            high = mid - 1;

                    }

            }




      }

  return -1 ;


}

int main () {

        std::vector<int> nums = {4,5,6,7,0,1,2};

        int target = 0 ;

        std:: cout << searchRotated(nums , target) << std::endl;

        return 0 ;

}