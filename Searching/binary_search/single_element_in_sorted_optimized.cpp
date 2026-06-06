#include<iostream>
#include<vector>

int singleElement(std::vector<int>& nums1) {

        int n = nums1.size();

        if(n==1) {

            return nums1[0];

        }

        int low = 0 ;
        int high = n - 1 ;


        while(low < high) {


                int mid = low + (high - low)/2;

                if(mid % 2 == 1) {

                     mid -- ;

                }

                if(nums1[mid] == nums1[mid+1]) {

                      low = mid + 2 ;

                }else {

                      high = mid ;

                }

        }
        return nums1[low] ;
}

int main () {

        std::vector<int> nums = {1 , 1 , 2 , 2, 3 , 3 , 4 , 4  , 5};

        std::cout << singleElement(nums) << std::endl;

        return 0 ;

}